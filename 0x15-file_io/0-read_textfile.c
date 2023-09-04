#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * to POSIX standard output.
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 * Return: 0 if it fails or actual number of letters it could
 * read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t fd;
        char *buff;
        ssize_t nbyte;
        ssize_t wbyte;

        if (filename == NULL)
                return (0);
        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);
        buff = malloc(sizeof(char) * letters);
        if (buff == NULL)
        {
                free(buff);
                return (0);
        }
        nbyte = read(fd, buff, letters);
        if (nbyte == -1)
        {
                free(buff);
                return (0);
        }
        wbyte = write(1, buff, nbyte);
        if (wbyte == -1 || wbyte != nbyte)
        {
                free(buff);
                return (0);
        }
        free(buff);
         close(fd);
        return (wbyte);
}
