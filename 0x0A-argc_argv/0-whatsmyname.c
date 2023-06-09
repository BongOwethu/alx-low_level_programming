#include <stdio.h>
#include "main.h"
/**
 * main - Output the name of program
 * @argc: Number of arguments
 * @argv: Array of the arguments
 * Return: 0 Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
