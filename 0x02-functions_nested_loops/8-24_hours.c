#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Description: Using neste while loops,
 * count up through every minute of the day
 * and print.
 */
void jack_bauer(void)
{
	int hour = 0;
	int m1;
	int m2;

	while (hour <= 23)
	{
		m1 = 0;
		while (m1 <= 5)
		{
			m2 = 0;
			while (m2 <= 9)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				_putchar(m1 + '0');
				_putchar(m2 + '0');
				_putchar('\n');

				m2++;
			}
			m1++;
		}
		hour++;
	}
}
