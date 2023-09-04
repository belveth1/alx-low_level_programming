#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on a success OR -1 on  a faliure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, n;
	int wbyte;

	n = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[n] != '\0')
			n++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	wbyte = write(fd, text_content, n);
	if (wbyte == -1)
		return (-1);
	close(fd);
	return (1);
}
