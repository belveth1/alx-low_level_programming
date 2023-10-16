#include "main.h"
/**
 * _strlen - Write a function that calculate the length of string.
 *@s: char parametar
 *Return: lenght of string
 */
int _strlen(char *s)
{
int n;
for (n = 0; *s != '\0'; s++)
n++;
return (n);
}
