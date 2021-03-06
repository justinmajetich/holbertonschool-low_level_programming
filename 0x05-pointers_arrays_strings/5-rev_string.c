#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j = 0, length = 0, half = 0;
	char *rev = s;
	char c0 = 0, c1 = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	for (i = length - 1; i >= half;)
	{
		c0 = rev[j];
		c1 = s[i];
		rev[j] = c1;
		s[i] = c0;

		j++;
		i--;
	}

	for (j = 0, i = 0; rev[j] != '\0'; j++, i++)
		s[i] = rev[j];
}
