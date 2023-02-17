#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Get a random value with 5
 * Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqurtuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
