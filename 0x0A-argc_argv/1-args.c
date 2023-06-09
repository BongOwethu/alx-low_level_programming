#include <stdio.h>
#include "main.h"
/**
 * main - Prints number of arguments passed in program
 * @argc: Number of the arguments passed
 * @argv: Array of the argument passed
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
