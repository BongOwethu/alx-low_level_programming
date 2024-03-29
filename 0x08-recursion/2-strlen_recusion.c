#include "main.h"
/**
 * _strlen_recursion - Returns the string. length
 * @s: The string to be measured.
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
