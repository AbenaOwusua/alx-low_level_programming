#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int m;
	char u;

	for (m = 0 ; m < 10 ; m++)
	{
		for (u = 'a' ; u <= 'z' ; u++)
			_putchar(u);
		_putchar('\n');
	}
}
