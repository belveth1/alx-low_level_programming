#include"main.h"
/**
*print_square -Write a function that draws a square according to n
*@size: length of square
*/
void print_square(int size)
{
int n, c;
if (size <= 0)
_putchar('\n');
else
{
for (n = 1; n <= size; n++)
{
for (c = 1; c <= size; c++)
{
_putchar(35);
}
_putchar('\n');
}
}
_putchar('\n');
}
