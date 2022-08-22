#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string
 * Return: 1 if file exists, -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r_write, num;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (num = 0; textcontent[num]; num++)
			;
		r_write = write(fd, text_content, num);
		if (r_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
