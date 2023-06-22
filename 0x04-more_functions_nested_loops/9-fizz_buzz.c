#include<stdio.h>
/**
*main -Write a function that write fizz buzz code
*/
void main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("fizz");
printf(" ");
continue;
}
else if (i % 5 == 0)
{
printf("buzz");
printf(" ");
continue;
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("fizzbuzz");
printf(" ");
continue;
}
else
printf("%d", i);
printf(" ");
continue;
}
printf("\n ");
}
