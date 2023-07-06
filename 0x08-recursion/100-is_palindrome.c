/**
 *is_palindrome - check if the string i spalindrome or not
 *@s : string be checked
 *Return: 1 if it is or 0 if not
 */
int is_palindrome(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
;
i--;
for (j = 0; s[j] != '\0'; j++)
{
if (s[i] != s[j])
return (0);
i--;
}
return (1);
}
