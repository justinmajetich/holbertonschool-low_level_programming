#include "holberton.h"

/**
 * *leet - encode in 1337
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int str_cnt = 0, cmp_cnt;
	char leet[6] = "43071";
	char up_al[6] = "aeotl";
	char low_al[6] = "AEOTL";

	while (s[str_cnt] != 0)
	{
		for (cmp_cnt = 0; cmp_cnt < 5; cmp_cnt++)
		{
			if (s[str_cnt] == up_al[cmp_cnt] || s[str_cnt] == low_al[cmp_cnt])
				s[str_cnt] = leet[cmp_cnt];
		}
		str_cnt++;
	}
	return (s);
}
