#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings
  * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
  * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int l1, l2, i, j;
for (l1 = 0; s1[l1] != '\0'; l1++)
;
for (l2 = 0; s2[l2] != '\0'; l2++)
;
if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");
ptr = malloc((l1 + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
if (n >= l2)
n = l2;
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; s2[j] != '\0' && j < n; j++)
{
ptr[i] = s2[j];
i++;
}
ptr[i] = '\0';
return (ptr);
}
