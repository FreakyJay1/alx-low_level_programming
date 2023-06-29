#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int J;
	int i;

	J = 0;
	while (dest[J] != '\0')
	{
		J++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[J] = src[i];
		J++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
