#include "main.h"
/**
 * main - Entry point
 * Description: Check for lowercase in letter
 * character to check
 * Return 0 or 1
 */

int _isaplha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}	