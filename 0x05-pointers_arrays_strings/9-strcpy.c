#include "holberton.h"

/**
 * _strcpy - copy string
 * @dest: target char array
 * @src: source char array
 * Return: pointer to target
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, length = 0;

	for (; src[i] != '\0'; i++)
		length++;

	for (i = 0; i <= length + 1; i++)
		dest[i] = src[i];

	return (dest);
}
