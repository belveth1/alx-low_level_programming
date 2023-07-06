#include <stdio.h>
int helper(int n, int i);
int is_prime_number(int n);
/**
  * is_prime_number - check if the number prime or not
  * @n : input number
  * Return: if the number is prime 1 if not 0
  */
int is_prime_number(int n)
{
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2 || n == 3)
return (1);
if (n % 2 == 0 || n % 3 == 0)
return (0);
return (helper(n, 5));
}
/**
  * helper - helper function to search the number
  * @n : input number
  * @i : number 5
  * Return: if the number is prime 1 if not 0
  */
int helper(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0 || n % (i + 2) == 0)
return (0);
return (helper(n, i + 4));
}
