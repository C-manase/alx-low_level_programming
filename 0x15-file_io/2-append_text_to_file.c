#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename:  name of the file
 *@text_content: NULL terminated string to be aded
 *
 *Return: 1 (success)and -1 (failure)
 *If filename is NULL return -1
 *If text_content is NULL, adds nothing to the file.
 *return 1 if file exists and -1 if file does not exist
 *or if you have no required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
