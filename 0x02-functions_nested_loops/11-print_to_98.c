#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the numner till 98
 * @n: number to start from
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}