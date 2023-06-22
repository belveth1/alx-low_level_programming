#include"main.h"
/**
*more_numbers -Write a function that print numbers from 0 tp 14 not 10 times
*/
void more_numbers(void)
{
int i, n, count;
for (count = 1; count <= 10; count++)
{
for (i = 0; i <= 14; i++)
{
n = i;
if (i > 9)
{
n = i % 10;
_putchar(49);
}
_putchar(n + 48);
}
_putchar('\n');
}
}
