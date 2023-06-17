#include <stdio.h>
/**
 *main - this print out alpha with putchar function
 *Return:0 is success
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar (alp[i]);
}
putchar('\n');
return (0);
}
