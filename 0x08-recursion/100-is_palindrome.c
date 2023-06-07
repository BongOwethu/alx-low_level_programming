#include "main.h"
int _strlen_recursion(char *s);
int check_pal(char *s, int i, int len);

/**
 * is_palindrome - Sees if string is a palindrome
 * @s: String to reverse
 * Return: 1 if it is else 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns string length
 * @s: Calculates the length of string
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Sees if the characters are a recursive palindrome
 * @s: Evaluated string
 * @i: Iterator value
 * @len: String length
 * Return: 1 if palindrome else 0 if its' not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
} 
