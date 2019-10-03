#include "holberton.h"

/**
 * *rot13 - encode string to rot13
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int str_cnt = 0, al_cnt;
	char low_al[53] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char up_al[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (s[str_cnt] != 0)
	{
		for (al_cnt = 0; al_cnt < 52;)
		{
			if (s[str_cnt] == low_al[al_cnt])
			{
				s[str_cnt] = low_al[al_cnt + 13];
				break;
			}
			else if (s[str_cnt] == up_al[al_cnt])
			{
				s[str_cnt] = up_al[al_cnt + 13];
				break;
			}
			else
				al_cnt++;
		}
		str_cnt++;
	}
	return (s);
}
