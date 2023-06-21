#include"main.h"
/**
 *print_last_digit - function that computes the absolute value number
 *@n: the number is to be checked
 *Return: last_digit of the number
 */
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
lastDigit = -1 * (n % 10);
else
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}

