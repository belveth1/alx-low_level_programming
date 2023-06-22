#include"main.h"
/**
*more_numbers -Write a function that print numbers from 0 tp 14 not 10 times
*/
void more_numbers(void)
{
int i, n, count;
for (count = 1; count <= 10; count++)
{
for (i = 0; i <= 9; i++)
{
_putchar(i + 48);
}
for (n = 0; n <= 4; n++)
{
_putchar('1');
_putchar(n + 48);
}
_putchar('\n');
}
}
