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
 * _sqrt_recursion - function finds natural squareroot of number
 * @n: the given number
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
/**
 * is_prime_number - function checks if input is a prime number
 * @n: given input
 * Return: if successful 1 else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
