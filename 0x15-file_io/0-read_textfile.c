#include <stdio.h>
#include <stdlib>

/**
 * read_textfile - read text file to print output
 * @filename: make file being read
 * @letters: number of letter to be read and print it
 * Return: numbers 0 if function fail or the file NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1024];
	ssize_t x;
	ssize_t y;
	ssize_t w;

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(x, buf, letters);

	y = write(stdout_FILENO, buf, w);

	free(buf);
	close(x);
	return (y);
}
