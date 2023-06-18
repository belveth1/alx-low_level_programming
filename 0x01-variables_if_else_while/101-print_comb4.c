#include <stdio.h>
/**
 *main - this print out number 3digits with spetial (,) with putchar function
 *Return:0 is success
 */
int main(void)
{int a, b, c;
for (a = '0'; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
for (c = b + 1 ; c <= '9'; c++)
{
if ((a != b) && (b != c) && (a != c))
{
putchar(a);
putchar(b);
putchar(c);
}
if (a != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
