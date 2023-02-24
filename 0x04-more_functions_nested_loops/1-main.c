#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isdigit(c));
	c = 0;
	printf("%c: %d\n", c, _idigit(c));
	return (0);
}
