#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of int
 * @a: input array
 * @n: input n elements
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i];
		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
