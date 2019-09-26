#include "holberton.h"

/**
 * print_triangle - prints triangle
 * @size: defines height and width of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int space_cnt;

	for (i = 1; i <= size; i++)
	{
		for (space_cnt = size - i; space_cnt > 0; space_cnt--)
			_putchar(' ');

		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
