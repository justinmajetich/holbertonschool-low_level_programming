#include <stdio.h>

/**
 * main - print numbers 00 to 99
 *
 * Return: (0)
 */
int main(void)
	{
	int i;
	int j;

	i = 48;
	j = 48;

	while (i < 58)
		{
		while (j < 58)
			{
			putchar(i);

			putchar(j);

			if (!(i == 57 && j == 57))
				{
				putchar(',');
				putchar(' ');
				}
			j++;
			}
		i++;
		j = 48;
		}
	putchar('\n');

	return (0);
	}
