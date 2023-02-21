#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: Compute and print the sum of all the multiples 8 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}

		c++
	}
	printf"%i\n", sum);
	retuen(0);
}
