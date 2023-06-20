#include <stdio.h>
/**
 *main - this print out alpha with lower case with putchar function
 *Return:0 is success
 */
int main(void)
{
int alph;
for (alph = 'a' ; alph <= 'z' ; alph++)
putchar(alph);
putchar('\n');
return (0);
}
