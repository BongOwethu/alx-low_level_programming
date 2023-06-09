#include <unistd.h>
/**
 * _putchar - Writes char c to stdout
 * @c: The character to print
 * Return: 1 Success and -1 On error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
