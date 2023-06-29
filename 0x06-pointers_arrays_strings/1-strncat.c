/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
int l, c;
for (l = 0; dest[l] != '\0'; l++)
;
for (c = 0; c < n; c++)
dest[l++] = src[c];
return (dest);
}
