#include "main.h"

/**
 * read_textfile - this reads a text files and prints it to the posix stdo
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dj;
	int num_r, num_w;
	char *cb;

	if (filename == NULL)
		return (0);
	cb = malloc(letters + 1);
	dj = open(filename, O_RDONLY);
	if (dj < 0 || cb == NULL)
		return (0);
	num_r = read(dj, cb, letters);
	if (num_r < 0)
	{
		close(dj);
		return (0);
	}
	ch[num_read] = '\0';
	num_w = write(STDOUT_FILENO, cb, num_r);

	free(cb);
	close(dj);

	if (num_r != num_w)
		return (0);
	return (num_r);
}
