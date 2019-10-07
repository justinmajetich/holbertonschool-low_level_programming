#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - print formatted buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int thru_cnt, col_cnt, spc_cnt;

	thru_cnt = 0;
	while (thru_cnt <= size - 1)
	{
		if (thru_cnt % 10 == 0)
			printf("%08x: ", thru_cnt);

		printf("%02x", b[thru_cnt]);

		if (thru_cnt == size - 1)
			for (spc_cnt = size % 10; spc_cnt <= 9; spc_cnt++)
				printf("  ");

		if (thru_cnt != 0 && thru_cnt % 2 != 0)
			printf(" ");
		if (thru_cnt == size - 1)
			for (spc_cnt = (size / 2) % 10; spc_cnt <= 4; spc_cnt++)
				printf(" ");

		if ((thru_cnt + 1) % 10 == 0 || thru_cnt == size - 1)
		{
			if (thru_cnt == size - 1)
				col_cnt = thru_cnt - ((size - 1) % 10);
			else
				col_cnt = thru_cnt - 9;

			while (col_cnt <= thru_cnt)
			{
				if (b[col_cnt] >= 32 && b[col_cnt] <= 126)
					printf("%c", b[col_cnt]);
				else
					printf(".");
				col_cnt++;
			}
			printf("\n");
		}
		thru_cnt++;
	}
}
