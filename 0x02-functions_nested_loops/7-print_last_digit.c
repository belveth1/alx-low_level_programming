#include "main.h"
/**
 *print_last_digit - function that computes the absolute value number
 *@n: the number is to be checked
 *Return: n the abs value
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = (-1) * n % 10;
}
else
{
n = n % 10;
}
_putchar(48 + n);
}
