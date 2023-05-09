#include "main.h"

/**
 * read_text_file -read the file and print it
 * @filename: name the file and read it 
 * @letters: numbers to read
 * 
 * Return: numbers to read and print if 0 means fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w;
	char buf(READ_BUF_SIZE * 8);

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	w = read(fd, &buf[0], letters);
	w = write(STDOUT_FILNO, *buf[0], w);
	close(fd);
	return (w);
}
