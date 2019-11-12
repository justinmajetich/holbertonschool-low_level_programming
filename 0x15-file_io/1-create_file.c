#include "holberton.h"
int _strlen(char *s);
/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: content of file
 *
 * Return: 1 on Success, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	/* guard against NULL filename */
	if (!filename)
		return (-1);

	/* create new file and retrieve descriptor */
	fd = open(filename, (O_WRONLY | O_CREAT | O_TRUNC), 00600);
	if (fd == -1) /* check for open failure */
		return (-1);

	if (text_content) /* if not NULL, write buffer to new file */
		write(fd, text_content, _strlen(text_content));

	return (1);
}
/**
* _strlen - Function that finds the length of a string
* @s: string that the length of is found
*
* Return: length of the @s
*/
int _strlen(char *s)
{
	/* variable to loop through string to get length */
	int len = 0;

	/* Loop through string, checking for null byte */
	while (s[len] != '\0')
		len++;

	/* return length variable once null byte is reached */
	return (len);
}
