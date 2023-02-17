#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Description: Prints the lowwer case alphabet in reverse
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
