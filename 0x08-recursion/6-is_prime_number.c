int helper(int n, int i);
/**
  * is_prime_number - check if the number prime or not
  * @n : input number
  * helper - helper function
  * @n : input number
  * Return: if the number is prime 1 if not 0
  */
int is_prime_number(int n)
{
if (n <=  1)
return (0);
else if (n == 2)
return (1);
else if (n % 2)
return (0);
else
return (helper(n, n / 2));
}
int helper(int n, int i)
{
if (i == 1)
{
return (1);
}
else
{
if (n % i == 0)
{
return (0);
}
else
{
i--;
return (helper(n, i));
}
}
}
