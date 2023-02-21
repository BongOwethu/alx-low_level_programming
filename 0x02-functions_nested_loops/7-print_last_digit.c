#include "main.h"

/**
 * main - Entry point
 * Description: A function that prints the last digit of a number
 * @n: We will use the int function for the argument of the function
 * Return: integer value
 */

int print_last_digit(int n);
{
	int last;

	last = n % 10;

	if (last < 0)
		last = laast * -1;

	_putchar(last + '0');

	return (last);
}
