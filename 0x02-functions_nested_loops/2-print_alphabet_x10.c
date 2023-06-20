#include "main.h"
/**
 *print_alphabet_x10 -print out alpha with lower case with _putchar function
 */
void print_alphabet_x10(void)
{
int alph;
int count;
for (count = 1; count <= 10; count++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
