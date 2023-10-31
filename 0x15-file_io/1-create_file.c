#include "main.h"
/**
 * create_file - function creates a file that creates a file
 * @filename: the name of the file to be created
 * @text_content: content to be written in the file
 * Return: if succesful 1 else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int numlet;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (numlet = 0 ; text_content[numlet] ; numlet++)
		;
	rwr = write(fd, text_content, numlet);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
