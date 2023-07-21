#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *x;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
x = va_arg(ptr,char*);
if (x)
printf("%s", x);
else
printf("(nil)");
if (separator && i != n - 1)
printf("%s", separator);
}
printf("\n");
}
