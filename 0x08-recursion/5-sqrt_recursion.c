#include "holberton.h"
#include <stdio.h>

int counter(int n, int x);

/**
 * _sqrt_recursion - return natural square root of number
 * @n: number
 *
 * Return: natural square root on Success, -1 on Fail
 */
int _sqrt_recursion(int n)
{
	int x = n;

	return (counter(n, x));
}

/**
 * counter - compare possible square roots of n
 * @n: number
 * @x: multiple to test
 *
 * Return: square root on Success, -1 on Fail
 */
int counter(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x <= 0)
		return (-1);
	else
		return (counter(n, x - 1));
}
