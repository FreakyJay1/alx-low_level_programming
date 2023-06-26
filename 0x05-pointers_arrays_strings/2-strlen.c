#include "main.h"
/**
 * _strlen - finds the lengths of a string.
 * @s: this is the input string
 * Return: returns the length
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
