#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: points to the first element of the array
 * @size: the number of the element in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 on failure or not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	return (-1);
}
