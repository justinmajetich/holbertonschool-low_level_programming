#include "holberton.h"

/**
 * times_table - prints 9 times table
 *
 * Description: Using nested loops,
 * prints computes and prints 9
 * times table.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(' ');
			}

			if ((i * j) / 10 != 0)
			{
				_putchar(((i * j) / 10) + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
			}
			_putchar(((i * j) % 10) + '0');

			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
