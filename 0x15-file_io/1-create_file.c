#include <stdlib.h>
#include "main.h"
/**
 * create_file - unction that creates file
 * @filename: name of file created
 * @text_content: file contents created
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int c;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(fd, text_content, len);

	if (fd == -1 || c == -1)
		return (-1);

	close(fd);

	return (1);
}
