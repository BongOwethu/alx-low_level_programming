#include "main.h"
/**
 * _puts_recursion - Uses a function like puts()
 * @s: gets the input
 * Return: Success 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
