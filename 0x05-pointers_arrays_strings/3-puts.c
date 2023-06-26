#include "main.h"
/**
 * _puts - prints a string
 * @str: input strings
 * Return: Void
 */
void _puts(char *str)
{
	int co = 0;

	while (co >= 0)
	{
		if (str[co] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[co]);
		co++;
	}
}
