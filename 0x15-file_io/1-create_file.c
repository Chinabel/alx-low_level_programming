#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of file to be created
 * @text_content:a NULL terminated string
 * Return: 1 if success, -1 on failure or if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, num = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (num = 0; textcontent[num];)
			num;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, num);
	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
