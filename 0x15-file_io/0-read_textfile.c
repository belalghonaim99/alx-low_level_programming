#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file to print output
 * @filename: make file being read
 * @letters: number of letter to be read and print it
 * Return: numbers 0 if function fail or the file NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	size_t fd;
	size_t rw;
	size_t rd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	rd = read(fd, buf, letters);

	rw = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fd);
	return (rw);
}