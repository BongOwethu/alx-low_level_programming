#include "main.h"
/**
 * _isalpha - checks the alphabet character
 * @c: a character to be checked on
 * Return: 0 or 1 depending on the contion
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
