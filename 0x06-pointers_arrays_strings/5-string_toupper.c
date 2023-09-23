#include "main.h"
/**
 * string_toupper - function changes all lowercase letters to uppercase
 * @str: parameter of function
 * Return: real_str
 */
char *string_toupper(char *str)
{
	char *real_str = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (real_str);
}
