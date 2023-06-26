#include "main.h"
/**
 * print_rev - prints a strings in revrse
 * @s: input strings
 * Return: Void
 */
void print_rev(char *s)
{
	int co = 0;

	while (co >= 0)
	{
		if (s[co] == '\0')
			break;
		co++;
	}
	for (co--; co > 0; co--)
		_putchar(s[co]);
	_putchar('\n');
}
