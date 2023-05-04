#include "main.h"

/**
 * binary_to_unit - convert binary numbers to unsinged int
 * @b: string containing the binary numbers
 *
 * Return: the convert numbers
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
