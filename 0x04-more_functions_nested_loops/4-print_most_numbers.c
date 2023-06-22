#include "main.h"
/**
 * print_most_numbers - prints then num except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 0; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
