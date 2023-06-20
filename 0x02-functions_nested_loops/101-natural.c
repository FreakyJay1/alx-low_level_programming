#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci, starting with 1 and 2,
 * Return: always 0
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
