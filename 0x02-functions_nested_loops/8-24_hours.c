#include "main.h"
/**
 * jack_bauer - function prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int o, p;

	for (o = 0 ; o < 24 ; o++)
	{
		for (p = 0 ; p < 60 ; p++)
		{
			_putchar(o / 10 + '0');
			_putchar(o % 10 + '0');
			_putchar(':');
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			_putchar('\n');
		}
	}
}
