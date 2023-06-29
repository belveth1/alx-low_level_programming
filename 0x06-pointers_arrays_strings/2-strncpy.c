/**
* _strncpy - A function that copies a string.
* @dest: pointer to destination input buffer
* @src: pointer to source input buffer
* @n: bytes of @src
* Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, c;
for (i = 0; src[i] < n && src[i] != '\n'; i++)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
