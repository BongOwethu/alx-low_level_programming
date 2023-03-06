#include "main.h"
/**
 * _memset -a block of memory with a specific value
 * @s: starting address of memory
 * @b: desired value
 * @n: number of changed bytes
 *
 * Return: array with new value for n bytes
 */
void *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
