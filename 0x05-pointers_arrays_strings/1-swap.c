#include "holberton.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer to swap with b
 * @b: integer to swap with a
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
