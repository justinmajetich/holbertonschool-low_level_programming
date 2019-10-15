#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string of concat
 * @s2: second string of concat
 *
 * Return: concatenated string on Success, NULL on Fail
 */
char *str_concat(char *s1, char *s2)
{
	char *sCat;
	int i = 0, j = 0;
	unsigned int len = 0;

	/* take length of strings */
	while (s1[i] != 0)
		len++;
	i = 0;
	while (s2[i] != 0)
		len++;
	
	/* allocate mem for sCat */
	sCat = malloc(sizeof(char) * len);
	if (sCat 
	/* copy s1 and s2 successively to sCat */
	for (i = 0; s1[i] != 0; i++, j++)
		sCat[j] = s1[i];
	for (; s2[i] != 0; i++, j++)
		sCat[j] = s2[i];

	/* terminate with '\0' */
	sCat[j] = '\0';

	return (sCat);
}
