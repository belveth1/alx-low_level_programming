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
return (1);
}
if (n = 0)
{
_putchar(48);
return(0);
}
if (n < 0)
{
_putchar(45);
return (-1);
}
}
