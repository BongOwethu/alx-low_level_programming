#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to standardout
 * @c: Printedcharacter
 * Return: 1 Success,
 * -1 Error is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
