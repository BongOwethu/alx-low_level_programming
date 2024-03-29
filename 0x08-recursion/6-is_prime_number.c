#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Outputs integer if a prime number or not
 * @n: Evaluate number
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calculates if prime number is recursive
 * @n: Evaluate value
 * @i: Iterated value

 * Return: Returns 1 if n is prime else 0 
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
