#include <stdio.h>
/**
 * main - program prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int next;
	int a;

	printf("%lu, ", num1);
	for (a = 1 ; a < 50 ; a++)
	{
		printf("%lu", num2);
		next = num1 + num2;
		num1 = num2;
		num2 - next;
		if (a != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
