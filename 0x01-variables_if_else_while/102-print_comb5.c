#include <stdio.h>

/**
 * main - print all combinations of two two-digit numbers
 *
 * Return: (0) for Success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	int l_add = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58;)
		{
			l_add = (j - 48) + 1;

			for (k = i; k < 58; k++)
			{
				for (l = 48 + l_add; l < 58; l++)
				{
					if (!(i == k && j == l))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);

						if (!(i == 57 && j == 56 && k == 57 && l == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
			j++;
		}
	}
	putchar('\n');

	return (0);
}
