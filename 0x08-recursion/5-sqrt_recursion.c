/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
  * @n : input number
  * Return: square root of @n or -1
*/
int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
else if (n < 0 || n % 2 != 0)
return (-1);
else if (n == 0)
return (0);
else
return (2 * _sqrt_recursion(n / 4));
}
