#include <stdio.h>
#include <stdlib.h>
/**
 * main - function multiples two numbers
 * @argc: parameter of function
 * @argv: parameter of function
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	product = n1 * n2;

	printf("%d\n", product);
	return (0);
}
