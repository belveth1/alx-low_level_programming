#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 *       if it matches
 *
 * Return: Always 0 (Success)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
bool d;
if (size <= 0)
return (-1);
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
d = (cmp)(array[i]);
if (d == TRUE)
return (i);
}
}
return (-1);
}
