#include "main.h"

/**
* print_line -> prints straight line in terminal
* @n: integer params
*/
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar('_');
		_putchar('\n');
	}
}
