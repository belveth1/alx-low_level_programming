#include <stdio.h>
/**
 *main - this print out numbers with putchar function
 *Return:0 is success
 */
int main(void)
{
int num;
for (num = 0 ; num < 10 ; num++)
{
putchar(num+48);
}
putchar('\n');
return (0);
}
