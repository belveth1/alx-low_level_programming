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
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Fizz");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
printf(" ");
}
printf("\n ");
}
