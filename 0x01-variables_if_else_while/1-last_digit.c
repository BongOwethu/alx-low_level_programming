#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		print("Last diigit of %d is %d and is greater than $\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of % is %d and is less that 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}

	return (0);
