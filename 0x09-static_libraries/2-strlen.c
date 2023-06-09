#include "main.h"
/**
 * _strlen - Returns string length
 * @s: String
 * Return: Length of string
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
