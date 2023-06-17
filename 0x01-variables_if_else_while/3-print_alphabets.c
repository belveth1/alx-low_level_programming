#include <stdio.h>
/**
 *main - this print out alpha with putchar function
 *Return:0 is success
 */
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
putchar(alp);
for (alp = 'A'; alp <= 'Z'; alp++)
putchar(alp);
putchar('\n');
return (0);
}
