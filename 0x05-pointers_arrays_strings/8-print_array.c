#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of array
 * @a: array to print from
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
