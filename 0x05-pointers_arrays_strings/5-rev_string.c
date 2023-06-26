#include "main.h"
/**
 * rev_string- prints a string in reverse
 * @s: string parameter input
 * Return: Nothing
*/
void rev_string(char *s)
{
int i, l, c;
for (i = 0; s[i] != '\0'; i++)
;
l = i;
for (c = 0; c <= l; c++)
_putchar(s[c]);
_putchar('\n');
for (--i; i >= 0; --i)
_putchar(s[i]);
}
