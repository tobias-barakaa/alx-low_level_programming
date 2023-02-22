#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int x, y;

	x = y = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			if ((x * y) < 10)
			{
				if (y != 0)
				{
					_putchar(' ');
				}
				_putchar((x * y) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			y++;
		}
		_putchar('\n');
		x++;
	}

}
