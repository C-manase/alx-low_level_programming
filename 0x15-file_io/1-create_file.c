#include "main.h"

/**
 *create_file - creates a file
 *@filename: name of the file to create
 *@text_content: NULL terminated string to write to the file
 *
 *Return: 1 (success) -1 (failure)
 *permissions: rw-------
 *if the file already exists terminate it
 *if filename is NULL return -1
 *if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[l] != 0)
			l++;
		w = write(fd, text_content, l);

		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
