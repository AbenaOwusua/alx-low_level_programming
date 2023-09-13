#include <stdio.h>
/**
 * main - the function of sum of multiples of 3 or 5 in numbers less that 1024
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);
}
