#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @letters: number of letters it should read and print
 * @filename: file to be read
 *
 * Return: actual number of letters
 * if the file cannot be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *c;

	if (filename == 0)
		return (0);

	c = malloc(letters + 1);

	if (c == 0)
		return (0);

	fd  = open(filename, O_RDONLY);

	if (fd == -1)
		return (free(c), 0);

	r = read(fd, c, letters);

	if (r == -1)
		return (free(c), 0);

	c[letters] = '\0';

	w = write(STDOUT_FILENO, c, r);
	if (w == -1)
		return (free(c), 0);

	free(c);
	close(fd);
	return (w);
}
