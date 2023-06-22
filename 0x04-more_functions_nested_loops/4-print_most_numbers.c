#include "main.h"
/**
 * print_most_numbers - prints then num from 0 to 9
 * Description: rints the number excluding 2 and 4
 * Return: the number from 0 to 9
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if ((x == 50) || (x == 52))
		{
			continue;
		}
		_putchar(x);
	}
	_putchar(10);
}
