#include <stdio.h>
#include <math.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	long n = 612852475143L;
	long largestPrimeFactor = -1;
	long i;

	while (n % 2 == 0)
	{
		largestPrimeFactor = 2;
		n /= 2;
	}
	for (i = 3 ; i <= sqrt(n) ; i += 2)
	{
		while (n % i == 0)
		{
			largestPrimeFactor = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		largestPrimeFactor = n;
	}
	printf("%ld\n", largestPrimeFactor);
	return (0);
}
