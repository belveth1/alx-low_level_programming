#include"main.h"
/**
*print_diagonal -Write a function that draws a diagonal line according to n
*@n: length of diagonal
*/
void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; ++postn)
		{
			for (space = 1; space <= postn; ++space)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}}
