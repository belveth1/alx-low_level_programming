#include "main.h"
/**
*print_numbers -Write a function that print numbers from 0 tp 9 not 2 and 4
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
	if (i == 2 || i == 4)
		continue;
_putchar(i);
}
_putchar('\n');
}
