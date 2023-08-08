#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 succes.
 * -1 for fail is returned.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
