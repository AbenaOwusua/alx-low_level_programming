#include "3-calc.h"
/**
 * main - function performs simple operations
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int argA, argB, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	argA = atoi(argv[1]);
	argB = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && argB == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(argA, argB);

	printf("%d\n", result);
	return (0);
}
