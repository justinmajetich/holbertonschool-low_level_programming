#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 *
 * Return: 0 is Success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int jj;
	int kk;

	j = 48;
	k = 48;

	for (i = 48; i < 56; i++)
	{
		jj = i - 47;
		kk = i - 46;
		for (j = jj + 48; j < 58; j++)
		{
			for (k = kk + 48; k < 58; k++)
			{
				if (!(i == j || j == k || k == i))
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (!(i == 55 && j == 56 && k == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			kk++;
		}
	}

	putchar('\n');

	return (0);
}
