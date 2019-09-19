#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: (0);
 */
int main(void)
	{
	int i;

	i = 48;

	while (i < 58)
		{
		putchar(i);
		i++;

		if (i != 58)
			{
			putchar(',');
			putchar(' ');
			}
		}

	putchar('\n');

	return (0);
	}
