#include "main.h"
/**
 * sqtRecursive - function calculates square root recursively
 * @begin: parameter of function
 * @end: parameter of function
 * @w: parameter of function
 * Return: 1 if squareroot not found else squareroot
 */
int sqtRecursive(int begin, int end, int w)
{
	long mid;

	if (end >= begin)
	{
		mid = begin + (end - begin) / 2;
		if (mid * mid == w)
			return (mid);
		if (mid * mid > w)
			return (sqtRecursive(begin, mid - 1, w));
					if (mid * mid < w)
					return (sqtRecursive(mid + 1, end, w));
					}
					return (-1);
					}
/**
 * _sqrt_recursion - function computes natural squareroot of a number
 * @n: parameter of n
 * Return: squareroot of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
			return (sqtRecursive(2, n, n));
}
