#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string
 * Return: 1 if success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r_write, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, 0_WRONLY | 0_APPEND)
			if (fd == -1)
				return (-1);
		len = 0;
		while (*(text_context + len) != '\0')
			len++;
		r_write = write(fd, text_content, len);
		if (r_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
