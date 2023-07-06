#include <stdio.h>
#include <string.h>
/**
 *is_palindrome_helper - check if the string i spalindrome or not
 *@s : string be checked
 *@i : string be checked
 *@j : string be checked
 *Return: 1 if it is or 0 if not
 */
int is_palindrome_helper(char *s, int i, int j)
{
if (i >= j)
{
return (1);
}
if (s[i] == s[j])
{
return (is_palindrome_helper(s, i + 1, j - 1));
}
return (0);
}
/**
 *is_palindrome - check if the string i spalindrome or not
 *@s : string be checked
 *Return: 1 if it is or 0 if not
 */
int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_helper(s, 0, len - 1));
}
