#include "main.h"
/**
 * main - Entry point
 * Decription: A function that prints every minute of the day
 * jack_bauer: prints the every minute
 * Return: void
 */

void jack_bauer(void)
{
	int hour1;
	int hour2;
	int minute1;
	int minute2;
	int a = 9;

	hour2 = 0;
	while (hour2 <= 2)
	{
		if (hour2 == 2)
		{
			a = 3;
		}
		hour1 = 0;
		while (hour1 <= a)
		{
			minute2 = 0;
			while (hour1 <= a)
			{
				minute1 = 0;
				while (minute1 <= 9)
				{
					_putchar('0' + hour2);
					_putchar('0' + hour1);
					_putchar(':');
					_putchar('0' + minute2);
					_putchar('0' + minute1);
					_putchar('\n');
					minute1++;
				}
				minute2++;
			}
			hour1++
		}
		hour2++
	}
}
