#include <stdio.h>
/**
 *main - this print out number with spetial (,) with putchar function
 *Return:0 is success
 */
int main(void)
{
int n;
for (n = 0 ; n <= 9; n++)
{
putchar(n + 48);
if (n != 9)
{
putchar(',');
}
}
putchar('\n');
return (0);
}
