#include "main.h"
/**
 * _isupper - Find all uppercase letters
 * @c: Checked charater
 * Return: 0 Success or 1 Fail
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
