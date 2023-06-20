#include "main.h"
/**
 *main - this print out alpha with lower case with putchar function
 *Return:0 is success
 */
void print_alphabet(void)
{
int alph;
for (alph = 'a' ; alph <= 'z' ; alph++)
_putchar(alph);
_putchar('\n');
}
