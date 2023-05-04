#include "main.h"

/**
 * get_bit - returns the value o a bit as index in a decimal number
 * @n: number for search
 * @index: index of bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 62)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
