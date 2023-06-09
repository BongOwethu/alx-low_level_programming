#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of n
 * @n: Calculate the square root of n
 * Return: Resulting square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recurses to find the natural square of n
 * @n: Calculate the sqaure root 
 * @i: iterated value
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
