#include "holberton.h"

/**
 * print_times_table - prints times table of n
 * @n: number to create table for
 *
 * Description: Using nested loops,
 * prints computes and prints n times table.
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0)
					_putchar(' ');

				if ((i * j) / 100 != 0)
					_putchar(((i * j) / 100) + '0');
				else
				{
					if (j != 0)
						_putchar(' ');
				}

				if ((i * j) / 10 != 0)
					_putchar((((i * j) / 10) % 10) + '0');
				else
				{
					if (j != 0)
						_putchar(' ');
				}
				_putchar(((i * j) % 10) + '0');

				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
