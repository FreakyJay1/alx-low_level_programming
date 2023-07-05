#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @j: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	return (x * _pow_recursion(x, j - 1));
}
