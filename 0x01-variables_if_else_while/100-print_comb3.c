#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: (0) for Success
 */
int main(void)
{
	int i;
	int j;
	int k;

	k = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = k + 48; j < 58; j++)
		{
			if (!(i == j))
			{
				putchar(i);
				putchar(j);

				if (!(i == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	k++;
	}
	putchar('\n');

	return (0);
}
