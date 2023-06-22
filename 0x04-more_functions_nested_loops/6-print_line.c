#include"main.h"
/**
*print_line -Write a function that draws a straight line according to n
*@n: number of (_)
*/
void print_line(int n)
{
int d;
for (d = 0; d <= n; d++)
{
if (n <= 0)
break;
_putchar('_');
}
_putchar('\n');
}
