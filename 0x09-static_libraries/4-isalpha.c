#include "main.h"
/**
 * _isalpha - Checks alphabetic char
 * @c: Checked char
 * Return: 1 if c is letter else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
