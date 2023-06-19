#include <unistd.h>

/**
 * _putchar - writes the character C to stdout
 * @c: The character print
 *
 * Return: On success 1.
 * iF Error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
