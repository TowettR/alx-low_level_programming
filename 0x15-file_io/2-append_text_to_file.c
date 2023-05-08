#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - file that appends text to the end of a file
 * @filename: name of the file in question
 * @text_content: content appended
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int c = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (filename != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	c = write(fd, text_content, len);

	if (fd == -1 || c == -1)
		return (-1);

	close(0);
	return (1);
}

