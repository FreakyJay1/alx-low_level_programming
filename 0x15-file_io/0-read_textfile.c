#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this reads a text files and prints it to the posix stdo
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t dj;
	ssize_t j;
	ssize_t d;

	dj = open(filename, O_RDONLY);
	if (dj == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(dj, buf, letters);
	j = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(dj);
	return (j);
}
