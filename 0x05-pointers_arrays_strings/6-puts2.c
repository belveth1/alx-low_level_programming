#include "main.h"
/**
 * puts2 - prints a string with index even
 * @str: string parameter input
 * Return: Nothing
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
;
for (--i; i >= 0; i--)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
