/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
int i, c;
for (i = 0; dest[i] != '\0'; i++)
;
for (c = 0; src[c]; c++)
dest[i++] = src[c];
return (dest);
}
