#include <stdio.h>
/**
 * main - function prints all arguments it program recieves
 * @argc: parameter of function
 * @argv: parameter of function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int args;

	for (args = 0 ; args < argc ; args++)
		printf("%s\n", argv[args]);
	return (0);
}
