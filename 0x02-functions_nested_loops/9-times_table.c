#include"main.h"

/**
 *times_table - prints the 9 times table
 *
 */
void times_table(void)
{
int num, x, y;
for (num = 0; num <= 9; ++num)
{
_putchar(48);
for (x = 1; x <= 9; ++x)
{
_putchar(',');
_putchar(' ');
prod = num * x;
if (y <= 9)
_putchar(' ');
else
_putchar((y / 10) + 48);
_putchar((y % 10) + 48);
}
_putchar('\n');
}
}
