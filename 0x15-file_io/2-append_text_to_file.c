#include "main.h"

/**
 * append_text_to_file - append to file
 * @filename: name of the  file to attend
 * @text_content: added
 *
 * Return: if -1 fails , if 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;


	if (filename == 0)

		return (-1);
	if (text_content != 0)
	{
		for (len = 0; text_content[len];)
			len++;
	}


	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);


	if (fd == -1 || wr == -1)
	return (-1);
	close(fd);
	return (1);
}
