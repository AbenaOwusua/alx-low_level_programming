#include <stdio.h>
#include <stdlib.h>
/**
 * main - function adds positive number
 * @argc: parameter of function
 * @argv: parameter of function
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int num, digits, sum = 0;

	for (num = 1 ; num < argc ; num++)
	{
		for (digits = 0 ; argv[num][digits] ; digits++)
		{
			if (argv[num][digits] < '0' || argv[num][digits] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
