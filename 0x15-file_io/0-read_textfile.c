#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - function reads text file
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read
 * Return: number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lengthr, lengthw;
	char *Buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	Buffer = malloc(sizeof(char) * letters);
	if (Buffer == NULL)
	{
	close(fd);
	return (0);
	}
	lengthr = read(fd, Buffer, letters);
	close(fd);
	if (lengthr == -1)
	{
	free(Buffer);
	return (0);
	}
	lengthw = write(STDOUT_FILENO, Buffer, lengthr);
	free(Buffer);
	if (lengthr != lengthw)
	return (0);
	return (lengthw);
}
