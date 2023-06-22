#include "main.h"

/**
 * _isupper - is to let all char to be uppercase letter
 * @c: char to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
