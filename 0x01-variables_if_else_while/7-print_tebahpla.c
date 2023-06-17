#include <stdio.h>
/**
 *main - this print out alph in reverse with putchar function
 *Return:0 is success
 */
int main(void)
{
int alp;
for (alp = 'z' ; alp >= 'a' ; alp--)
putchar(alp);
putchar('\n');
return (0);
}
