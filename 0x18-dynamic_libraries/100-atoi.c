#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, w, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	w = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && w == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			w = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			w = 0;
		}
		i++;
	}

	if (w == 0)
		return (0);

	return (n);
}

