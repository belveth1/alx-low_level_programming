#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/
int isNum(char num[])
{
int i, l = strlen(num);
for (i = 0; i < l; i++)
{
if (!isdigit(num[i]))
return (1);
}
return (0);
}
/**
 * main - a program that adds positive numbers
  * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, res;
if (argc == 1)
{printf("0\n");
return (0);
}
else
{
for (i = 1; i < argc; i++)
{
if (isNum(argv[i]) == 0)
res += atoi(argv[i]);
else
{
printf("Error\n");
return (0);
}
}
printf("%d\n", res);
return (0);
}
}
