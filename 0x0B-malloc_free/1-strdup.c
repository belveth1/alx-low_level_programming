#include <stdlib.h>
/**
 * *_strdup - a function that duplicates a string
 * @str: input string to duplicate
 * Return: NULL if str == NULL
 *         @str
*/
char *_strdup(char *str)
{
int i;
char *x;
for (i = 0; str[i] != '\0'; i++)
;
if (str == NULL)
return (NULL);
x = malloc(i * sizeof(char));
if (x == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
x[i] = str[i];
return (x);
}
