#include "main.h"
/**
 * char *_strcpy - Function copied when the string pointed to by src
 * @dest: Copy string to
 * @src: Copy stringfrom
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;


	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
