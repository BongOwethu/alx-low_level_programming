#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * DEscription: Get a random number and print the number
 * and if it is positive, negavtive or zer
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		print"%d is zer\n", n);
	return (0);
}
