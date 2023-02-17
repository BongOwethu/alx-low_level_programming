#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Get a random value with 5
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
