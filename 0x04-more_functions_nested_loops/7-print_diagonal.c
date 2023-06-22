#include"main.h"
/**
*print_diagonal -Write a function that draws a diagonal line according to n
*@n: length of diagonal
*/
void print_diagonal(int n)
{
int d, space;
for (d = 1; d <= n; d++)
{
if (n <= 0)
{
break;
}
else
{
for (space = 1; space <= d; space++)
{
_putchar(' ');
}
_putchar(92);
}
_putchar('\n');
}
_putchar('\n');
}
