#include "holberton.h"

/**
 * read_textfile - reads and prints text to stdout
 * @filename: file to read/print from
 * @letters: number of bytes to read/print
 *
 * Return: number of bytes read/printed, 0 if unreadable or !filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t print_cnt, read_cnt;
	char *buffer;

	/* check for NULL arg */
	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	/* retrieve file descriptor for opened file */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* check if open success */
		return (0);

	/* read file to buffer, check success */
	read_cnt = read(fd, buffer, letters);
	if (read_cnt == -1)
		return (0);

	/* write buffer to stdout, check success */
	print_cnt = write(STDOUT_FILENO, buffer, read_cnt);
	if (print_cnt == -1)
		return (0);

	/* close file descript, check success */
	if (close(fd) == -1)
		return (0);

	/* free memory allocated to buffer */
	free(buffer);

	/* return number of chars printed */
	return (print_cnt);
}
