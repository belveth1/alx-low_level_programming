#include"main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 * Return: 0 if it fails or actual number of letters it could
 * read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, rbyte, wbyte;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rbyte = read(fd, buff, letters);
	wbyte = write(STDOUT_FILENO, buff, rbyte);
	free(buff);
	close(fd);
	return (wbyte);
}
