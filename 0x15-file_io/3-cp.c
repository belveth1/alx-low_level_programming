#include"main.h"
void close_file(int fd);
char *allocate_buff(char *file);
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char **argv)
{
	int source, des, wbyte, rbyte;
	char *buff;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = allocate_buff(argv[2]);
	source = open(argv[1], O_RDONLY);
	rbyte = read(source, buff, 1024);
	des = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source == -1 || rbyte == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wbyte = write(des, buff, 1024);
		if (des == -1 || wbyte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		rbyte = read(source, buff, 1024);
		des = open(argv[2], O_WRONLY | O_APPEND);
	} while (rbyte > 0);
	free(buff);
	close_file(source);
	close_file(des);
	return (0);
}
/**
 * allocate_buff - to Allocates 1024 bytes for a buffer.
 * to not use call system too much
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to  newly-allocated buffer.
 */
char *allocate_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
		}
	return (buff);

}
/**
 * close_file - delete file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int n;

	n = close(fd);
	if (n == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
