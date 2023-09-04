#include "main.h"

/**
 * read_textfile - this reads a text files and prints it to the posix stdo
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_j;
	ssize_t lenj, lenb;
	char *buf;

	if (filename == NULL)
		return (0);
	file_j = open(filename, O_RDONLY);
	if (file_j == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_j);
		return (0);
	}
	lenj = read(file_j, buf, letters);
	close(file_j)
	if (lenj == -1)
	{
		free(buf);
		return (0);
	}
	lenb = write(STDOUT_FILENO, buf, lenj);
	free(buf);
	if (lenj != lenb)
		return (0);
	return (lenb);
}
