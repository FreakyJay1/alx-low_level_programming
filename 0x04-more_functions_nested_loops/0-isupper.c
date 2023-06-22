#include "main.h"
/**
 * _isupper: is to let all char to be uppercase letter
 * @c: char to check
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
