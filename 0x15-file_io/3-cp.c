#include "main.h"
#include <stdio.h>
/**
 * errors_file - the function checks if the file can be opened
 * @file_from: where the file is from
 * @file_to: where the file is going to
 * @argv: the arguments
 * Return: void
 */
void errors_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main -the function checks the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, error_close;
	ssize_t numchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors_file(file_from, file_to, argv);
	numchars = 1024;
	while (numchars == 1024)
	{
		numchars = read(file_from, buf, 1024);
		if (numchars == -1)
			errors_file(-1, 0, argv);
		nwr = write(file_to, buf, numchars);
		if (nwr == -1)
			errors_file(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
