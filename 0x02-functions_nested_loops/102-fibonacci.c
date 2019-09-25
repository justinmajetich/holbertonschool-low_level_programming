#include <stdio.h>

/**
 * main - print first 50 Fibonacci
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, numx;

	for (i = 0; i <= 49; i++)
	{
		printf("%lu", num1);

		numx = num1 + num2;
		num1 = num2;
		num2 = numx;

		if (i != 49)
			printf(", ");
	}

	printf("\n");

	return (0);
}

