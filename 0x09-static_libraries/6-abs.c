#include "main.h"
/**
 * _abs - the function computes absolute value
 * @a: the parameter of the function
 * Return: -a or a
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
