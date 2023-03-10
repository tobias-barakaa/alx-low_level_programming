#include "main.h"
/**
*check_prime - get the prime for n
*@n: num we check is prime or not
*@i: num we walk through to check the prime
*Return: 0 if not prime, 1 if prime
*/
int check_prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check_prime(n, i + 1));
		}
	}
	else
	{
		return (1);
	}

}
/**
*is_prime_number - fun that we know if num is prime or not
*@n: num we check
*Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}
