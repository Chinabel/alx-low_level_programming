#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: the number of letters
 * Return: 0 if success
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
	fwr = write(STDOUT_FILENO, out, frd);

	close(x);
	free(out);

	return (fwr);
}
