#include <stdio.h>

/**
 * main - print sum of multiples
 *
 * Description: cycles through numbers below
 * 1024, counts those evenly divisible by
 * 3 or 5, and prints sum of all
 * Return: 0 on Success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
