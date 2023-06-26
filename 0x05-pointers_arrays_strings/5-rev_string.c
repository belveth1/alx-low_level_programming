#include "main.h"
/**
 * rev_string- prints a string in reverse
 * @s: string parameter input
 * Return: Nothing
*/
void rev_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
for (--i; i >= 0; --i)
_putchar(s[i]);
}
