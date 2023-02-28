#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Retuen: legnth
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
