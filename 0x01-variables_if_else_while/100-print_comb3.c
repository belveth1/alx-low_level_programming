#include <stdio.h>
/**
 *main - this print out number with spetial (,) with putchar function
 *Return:0 is success
 */
int main(void)
{
int a, b;
for (a = '0' ; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
if (a != b)
putchar(a);
putchar(b);
if (a != '8')
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
