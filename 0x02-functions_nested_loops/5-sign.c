#include "main.h"
/**
 *_isalpha - check for sign of number
 *@n: the number is to be checked
 *Return: 1 for + sign 0 for zero -1 for - sign
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
_putchar(44);
_putchar(' ');
return (1);
}
else if (n = 0)
{
_putchar(48);
_putchar(44);
_putchar(' ');
return(0);
}
else
{
_putchar(45);
_putchar(44);
_putchar(' ');
return (-1);
}
_putchar('\n')
}
