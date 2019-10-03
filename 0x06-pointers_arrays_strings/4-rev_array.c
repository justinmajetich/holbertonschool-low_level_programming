#include "holberton.h"

/**
 * reverse_array - reverse int array
 * @a: pointer to array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int left = 0, right = n - 1, half = n / 2, temp;

	while (right >= half)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
