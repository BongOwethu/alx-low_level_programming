#include <unstd.h>

/**
 *  _putchar - writes the character c to the stdout
 * @c: The character to print
 *
 * Return: On scussess 1.
 * On error, -1 is returned, and erro is set approriately.
 */
int _putchar(char c)
{
	        return(write(1, &c, 1));
}
