#include <stdio.h>
/**
 *main - this print out alpha with putchar function
 *Return:0 is success
 */
int main(void)
{
char alp;
char e = 'e';
char q = 'q';
for (alp = 'a'; alp <= 'z'; alp++)
{
if (alp != q && alp != e)
putchar(alp);
}
putchar('\n');
return (0);
}
