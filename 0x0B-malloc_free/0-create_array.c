#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of a certain size and assigns char c
 * @size: Size of array
 * @c: Character to assign
 * Description: creat array of size size and assign char c
 * Return: Pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);


	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);
}
