#include "main.h"

/**
 * flip_bits - the counts the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m:the second number
 *
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, c = 0;
	unsigned long int cur;
	unsigned long int exc = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cur = exc >> j;
		if (cur & 1)
			c++;
	}

	return (c);
}
