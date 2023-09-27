#include "main.h"
/**
 * _pow_recursion - function returns x exponent y
 * @x: parameter of function
 * @y: parameter of function
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int whenEven;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		whenEven = _pow_recursion(x, y / 2);
		return (whenEven * whenEven);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
