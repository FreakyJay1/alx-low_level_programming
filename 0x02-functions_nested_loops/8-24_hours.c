#include "main.h"
/**
 * jack_bauer - prints every mintues of the day of Jack Bauer
 * starting from 00:00 am to 23:59 pm
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('.');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
