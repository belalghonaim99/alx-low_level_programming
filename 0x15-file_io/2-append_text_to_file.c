#include "main.h"

/**
 *  _strlen - return string
 * @s: check length of string
 *
 * Return: int
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

/**
 * create_file - create a file
 * @filename: name of the  file to create
 * @text_content: write to the  file
 *
 * Return: if -1 fails , if 1 success
 */
int create_file(const char *filename, char *text_content)
{
        int fd;
        ssize_t wr = 0, len = _strlen(text_content);

        if (!filename)
                return (-1);
        fd = open(filename, O_WRONLY | O_APPEND);
        if (fd == -1)
                return (-1);
        if (len)
                wr = write(fd, text_content, len);
        close(fd);
        return (wr == len ? 1 : -1);
}
