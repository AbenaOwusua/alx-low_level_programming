#include "main.h"
/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text content added.
 * Return: 1 if it exists. -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numlet;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (numlet = 0 ; text_content[numlet] ; numlet++)
			;
		rwr = write(fd, text_content, numlet);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
