#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet
 * Description:A function tha prints the alphabet in lowercase
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
