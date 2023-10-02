#include <stdio.h>
/**
 * main - function prints the number of arguments
 * @argc: parameter of function
 * @argv: parameter of function
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
