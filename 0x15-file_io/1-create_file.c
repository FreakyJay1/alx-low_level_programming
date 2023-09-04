#include "main.h"

/**
 * _strlen -the calculates the string length
 * @str: a string to be calculated
 * Return: returns a integer
 */

unsigned int _strlen(const char *str)
{
	unsigned int j = 0;

	while (str[j] != '\0')
		j++;
	return (j);
}

/**
 * create_file - creates a file
 * @filename: file name of file to been created
 * @text_content: the contents of the file
 * Return: 1 a success and -1 a fail
 */

int create_file(const char *filename, char *text_content)
{
	int dj, n_w;

	if (filename == NULL)
		return (-1);
	dj = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (dj == -1)
		return (-1);
	if (text_content != NULL)
	{
		n_w = write(dj, text_content, _strlen(text_content));
		if (n_w == -1)
		{
			close(dj);
			return (-1);
		}
	}
	close(dj);
	return (1);
}
