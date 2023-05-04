#include "main.h"

/**
 * get_endianness -checks the endianness if big endian or little endian
 *
 * big endian 0 and little endian 1
 *
 * Return: 1 for little 0 for big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
