#include "main.h"

/**
 * _strlen - the calculates the string length
 * @str: a string to be calculated
 * Return:the returns an integer
 */

unsigned int _strlen(const char *str)
{
	unsigned int j = 0;

	while (str[j] != '\0')
		j++;
	return (j);
}

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: filename to been appended
 * @text_content: content to been appended
 * Return: 1 success and -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int dj, n_w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	dj = open(filename, O_APPEND | O_WRONLY);
	if (dj == -1)
		return (-1);
	n_w = write(dj, text_content, _strlen(text_content));
	if (n_w == -1)
	{
		close(dj);
		return (-1);
	}
	close(dj);
	return (1);
}
