#include "main.h"

/**
 * binary_to_uint -the  converts a binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return: the converted numbers
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec = 2 * dec + (b[j] - '0');
	}

	return (dec);
}
