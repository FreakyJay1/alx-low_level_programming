#include "main.h"
/**
 * print_alphabet - is to print all alphabet in lowercase
 *
 * return: always 0
*/
void print_alphabet(void)
{
	char l;
	for (l = "a", l <= "z", l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
