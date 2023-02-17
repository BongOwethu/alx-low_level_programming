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
	last = n % 10;
	if (last > 5)
		print("Last diigit of %d is %d and is greater than $\n", n, last);
	else if (last = 0)
		printf("Last digit of %d is %d and is i0\n", n, last);
	else if (last <6)
		printf("Last digit of %d is %d and is less tahn 6 and not 0\n", n, last)
	return (0);
}
