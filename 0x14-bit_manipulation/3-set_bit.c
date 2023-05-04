#include "main.h"

/**
 * set_bit - sets a bitat giveen index equal 1
 * @n: pointer the number to change it
 * @index: index the bit to set 1
 *
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
