#include "main.h"

/**
 * print_binary - the prints the binary equivalent of a decimal number
 * @n: the  number to print in binary
 */

void print_binary(unsigned long int n)
{
	int j, c = 0;
	unsigned long int cu;

	for (j = 63; j >= 0; j--)
	{
		cu = n >> j;

		if (cu & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
