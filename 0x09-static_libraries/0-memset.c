#include "main.h"
/**
 * _memset - fill block of memory with specificed value
 * @s: Start address of memory to be filled
 * @b: Value desired
 * @n: Number of bytes to be itereated
 * Return: Changed array with new n bytes value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
