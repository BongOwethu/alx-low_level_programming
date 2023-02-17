#include <stdio.h>
/**
 * main - Entry point
 * Description: Get a random number and checks it
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
