#include <stdio.h>
/**
 *main - this print out hexa with putchar function
 *Return:0 is success
 */
int main(void)
{
int hexa;
for (hexa = 0; hexa <= 9; hexa++)
putchar(hexa + 48);
for (hexa = 'a'; hexa <= 'f'; hexa++)
putchar(hexa);
putchar('\n');
return (0);
}
