#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this function print rondom numbers and check postive or negatve
 * Return: 0 is success
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 2 == 0)
printf("% d is positive", n);
else if (n == 0)
printf("is zero")
else if (n % 2 != 0)
printf("% d is negative", n);
return (0);
}
