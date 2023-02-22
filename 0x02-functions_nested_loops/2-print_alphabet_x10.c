#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int   c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
