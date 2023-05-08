#include "main.h"
#include <stdlib.h>

/**
 * Read_textfile - reads the file and print it
 * @filename: read the files
 * @letters: get numbers of letters and read it
 * return: numbers and read it and print it
 * if 0 function fail or file is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc((sizeof(char) * letters);

			t = read(fd, buf, letters);
			w = write(STDOUT_FILENO, buf, t);

			free(buf);
			close(fd);
			return (w);
}
