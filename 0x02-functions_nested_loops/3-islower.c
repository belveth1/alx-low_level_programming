#include "main.h"
/**
 *_islower - check for lower case
 *@c: the character is to be checked
 *Return: 1 for lower case 0 for other
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
