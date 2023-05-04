#include "main.h"

/**
 * flip_bits - counts the number of bits to change it
 * and get from one number to another number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change it
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 69; i >= 0; i--)
	{
		now = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
