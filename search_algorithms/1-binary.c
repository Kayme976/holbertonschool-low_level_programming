#include "search_algos.h"

/**
 * print_array - print array
 * @array: an array of intingers
 * @i: first element to print
 * @j: last element to print
 */
void print_array(int *array, int i, int j)
{
	printf("searching in array: ");
	while (i <= j)
	{
		printf("%d", array[i]);
		i++;
		if (i <= j)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - that seraches for a value in a sorted array integers
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search
 * @size: the number of element in array
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2;
			if (array[i] < value)
				first = i + 1;
			else if (array[i] > value)
				last = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}

