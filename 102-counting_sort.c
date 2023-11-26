#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order
 * using the Counting sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	size_t idx = 1;
	int i = 1, max = array[0], *count, *output;

	if (array == NULL || size < 2)
		return;

	

	for (idx = 1; idx < size; ++idx)
	{
		if (array[idx] > max)
			max = array[idx];
	}

	count = malloc((max + 1) * sizeof(int));
	if (count == NULL)
		return;
	for (i = 0; i <= max; ++i)
		count[i] = 0;
	for (idx = 0; idx < size; ++idx)
		count[array[idx]]++;
	for (i = 1; i <= max; ++i)
		count[i] += count[i - 1];

	output = malloc(size * sizeof(int));
	if (output == NULL)
	{
		free(count);
		return;
	}
	for (i = size - 1; i >= 0; --i)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	for (idx = 0; idx < size; ++idx)
		array[idx] = output[idx];
	print_array(count, max + 1);

	free(count);
	free(output);
}
