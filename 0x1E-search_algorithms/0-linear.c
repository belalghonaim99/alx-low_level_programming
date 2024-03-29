#include "search_algos.h"

/**
 * linear_search - searching for the value in array
 *  size is the number of elements in array
 *  If value is not present in array or if array is NULL,
 *  your function must return -1
 * @array: array is a pointer
 * @size: size of the array
 * @value: value of the array
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int y;

	if (array == NULL)
		return (-1);

	for (y = 0; y < (int)size; y++)
	{
		printf("Value checked array[%u] = [%d]\n", y, array[y]);
		if (value == array[y])
			return (y);
	}
	return (-1);
}
