#include "main.h"

/**
* print_diagonal -> draw a diagonal line on terminal
* @n: number of times the number should be printed
*/
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < n; i++)
			{
				if (x == i)
					_putchar('\\');
				else if (i < x)
					_putchar(' ');
			}
			_putvhar('\n');
		}
	}
}
