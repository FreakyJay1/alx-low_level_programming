#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 * @c: the characters to print
 * Return: 1 is success.
 * On error is -1 will returned, and errno is set to appropiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

