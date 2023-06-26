#include "main.h"
/**
 * swap_int - function thats swap the value of 2 int
 * @a: this is 1 int
 * @b: this is 2 int
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
