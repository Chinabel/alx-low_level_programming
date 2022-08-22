#include "main.h"
#include <string.h>

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: as it implies
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t frd, fwr;
	char *out;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	out = malloc(sizeof(char) * (letters));
	if (!out)
		return (0);
	frd = read(x, out, letters);
	if (frd == -1)
		return (0);
	fwr = write(STDOUT_FILENO, out, frd);
	free(out);
	close(x);
	return (fwr);
}
