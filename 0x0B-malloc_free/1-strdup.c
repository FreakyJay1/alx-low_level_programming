#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	aaa = malloc(sizeof(char) * (j + 1));

	if (aaa == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		aaa[k] = str[k];

	return (aaa);
}
