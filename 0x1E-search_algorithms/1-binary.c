#include "search_algos.h"

/**
  * binary_search - Searches for a value in array
  * @array: A pointer to show the first index of the array
  * @size: numbers of elements in the array
  * @value: value to search for array
  *
  * Return: value is not present in array of if array is NULL, -1
  *         Otherwise, the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t y, left_elem, right_elem;

	if (array == NULL)
		return (-1);

	for (left_elem = 0, right_elem = size - 1; right_elem >= left_elem;)
	{
		printf("Searching in array: ");
		for (y = left_elem; y < right_elem; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[y]);

		y = left_elem + (right_elem - left_elem) / 2;
		if (array[y] == value)
			return (y);
		if (array[y] > value)
			right_elem = y - 1;
		else
			left_elem = y + 1;
	}

	return (-1);
}