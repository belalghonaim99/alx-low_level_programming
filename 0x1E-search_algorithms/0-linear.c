#include "search_algos.h"

/**
 * Prototype : int linear_search(int *array, size_t size, int value);
 * Where array is a pointer to the first element of the array to search in
 *  size is the number of elements in array
 *  And value is the value to search for
 *  Your function must return the first index where value is located
 *  If value is not present in array or if array is NULL,
 *  your function must return -1
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