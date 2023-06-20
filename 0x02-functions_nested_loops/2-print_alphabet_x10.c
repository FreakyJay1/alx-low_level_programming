#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times of the alphabet in lowercase
 * followed by a new line
 * return: always 0
 */
void print_alphabet_x10(void)
{
	char az;
	int i;
	while (i < 10)
	{
		az = 'a';
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		i++;
	}
}
