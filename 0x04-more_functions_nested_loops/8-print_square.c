#include "main.h"

/**
* print_square -> print a square on terminal
* @size: size of the square
*/
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
