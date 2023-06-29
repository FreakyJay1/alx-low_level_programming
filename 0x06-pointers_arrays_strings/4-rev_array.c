#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int j;
	int t;

	for (j = 0; j < n--; j++)
	{
		t = a[j];
		a[j] = a[n];
		a[n] = t;
	}
}
