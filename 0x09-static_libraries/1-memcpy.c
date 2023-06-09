#include "main.h"
/**
 *_memcpy - Function that copies memory
 *@dest: Stored memory
 *@src: Copied memory
 *@n: Number of bytes
 *Return: Copied memory with changed n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
