#include"main.h"
/**
*print_diagonal -Write a function that draws a diagonal line according to n
*@n: length of diagonal
*/
void print_diagonal(int n)
{
int d, space;
if (n <= 0)
_putchar('\n');
else
{
for (d = 1; d <= n; ++d)
{
for (space = 1; space <= d; ++d)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
_putchar('\n);
}
