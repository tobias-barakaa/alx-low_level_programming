#include "main.h"

/**
 * jack_bauer - print every minute of a 24 hour period
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h, m;

	h = m = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
