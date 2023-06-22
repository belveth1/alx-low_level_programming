#include"main.h"
/**
*more_numbers -Write a function that print numbers from 0 tp 14 not 10 times
*/
void more_numbers(void)
{
int i, count;
for (count = 0; count <= 10 ; count++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i + 48);
}
_putchar('\n');
}
}
