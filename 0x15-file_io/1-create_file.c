#include "main.h"

/**
 * create_file - creates file
 * @filename: name file to create
 *@text_content: text
 * Return: 1 if success & 0 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w = 0; len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_TRUSR | S_TWUSR);
	if (fd == -1)
			return (-1);

			if (len)

			w = write(fd, text_content, len);
			close(fd);
			return (w == len ? 1 : -1);
}

/**
 * _strlen - return string
 * @s: chech the string
 *
 * Return: int of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
