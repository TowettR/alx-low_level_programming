#include "main.h"

/**
 * read_textfile - function that reads a text file and prints to std output
 * @filename: name of file
 * @letters: name of system calls
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(fd, buf, letters);
	p = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(fd);
	return (0);
}
