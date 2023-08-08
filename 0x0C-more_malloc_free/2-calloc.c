#include "main.h"
/**
 * _calloc - Allocates memory to the array
 * @nmemb: Numbered elements in the array
 * @size: Size of each element
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	p[i] = 0;

	return (p);
}
