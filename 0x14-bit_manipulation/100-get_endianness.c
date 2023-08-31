#include "main.h"

/**
 * get_endianness - the checks if a machine is little or big endian
 * Return: 0 for the big, 1 for the little
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *j = (char *) &b;

	return (*j;
}
