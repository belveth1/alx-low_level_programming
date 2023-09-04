#include "main.h"
#define size 1024
/**
 * exit_errors - prints error messages and exits with exit number
 *
 * @error: either the exit number or file descriptor
 * @file: name of either file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0 on success
*/
int exit_error(int error, char *file, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}
/**
 * main - create a copy of file to another file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success.
*/
int main(int argc, char *argv[])
{
	int source_file, des_file, rbyte, wbyte;
	int close_sfile, close_dfile;
	char buff[size];

	if (argc != 3)
		exit_error(97, NULL, 0);
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
		exit_error(98, argv[1], 0);
	des_file = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (des_file == -1)
		exit_error(99, argv[2], 0);
	while((rbyte = read(source_file, buff, size)) != 0)
	{
		if (rbyte == -1)
			exit_error(98, argv[1], 0);
		wbyte = write(des_file, buff, size);
		if (wbyte == -1)
			 exit_error(99, argv[2], 0);
	}
	close_sfile = close(source_file);
	if (close_sfile == -1)
		exit_error(100,NULL, source_file);
	close_dfile = close(des_file);
	if (close_dfile == -1)
		exit_error(100, NULL, des_file);
	return (0);
}
