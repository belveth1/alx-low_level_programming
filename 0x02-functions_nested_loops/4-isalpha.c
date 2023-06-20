#include "main.h"
/**
 *_isalpha - check for lower case
 *@c: the character is to be checked
 *Return: 1 for alpha 0 for other
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
