#include "main.h"
/**
 * leet - function encodes
 * @str: parameter of function
 * Return: real_str
 */
char *leet(char *str)
{
	char *real_str = str;
	char leet_table[256];
	int i;

	for (i = 0 ; i < 256 ; i++)
	{
		leet_table[i] = i;
	}
	leet_table['a'] = leet_table['A'] = '4';
	leet_table['e'] = leet_table['E'] = '3';
	leet_table['o'] = leet_table['O'] = '0';
	leet_table['t'] = leet_table['T'] = '7';
	leet_table['l'] = leet_table['L'] = '1';

	while (*str != '\0')
	{
		if (leet_table[(unsigned char)*str] != *str)
		{
			_putchar(leet_table[(unsigned char)*str]);
					}
					else
					{
					_putchar(*str);
					}
					str++;
					}
					return (real_str);
					}
