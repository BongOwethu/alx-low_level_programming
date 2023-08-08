#include <stdlib.h>
#include "main.h"
/**
 * *array_range - Array of integers created
 * @min: Minimum range of values stored
 * @max: Maximum range of values stored 
 * and Number of elements
 * Return: Pointer to New array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
