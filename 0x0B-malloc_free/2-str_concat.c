#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 * Return: NULL on faliure
 */
char *str_concat(char *s1, char *s2)
{
int x, y, i, j;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[x] != '\0')
x++;
while (s2[y] != '\0')
y++;
/*+1 for our end of string character*/
s = malloc((x * sizeof(char)) + ((y + 1) * sizeof(char)));
if (s == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
s[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}
