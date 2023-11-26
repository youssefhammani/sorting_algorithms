#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order using
 *                 the Counting sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: Nothing.
 */
void counting_sort(int *array, size_t size)
{
	unsigned int i;
	int *count_array = NULL;
	int max_value, temp, j;

	if (array == NULL || size < 2)
		return;
	max_value = array[0];
	for (i = 0; i < size; ++i)
	{
		if (array[i] > max_value)
			max_value = array[i];
	}

	count_array = malloc(sizeof(int) * (max_value + 1));
	if (count_array == NULL)
		return;
	for (j = 0; j <= max_value; ++j)
		count_array[j] = 0;
	for (i = 0; i < size; ++i)
		count_array[array[i]]++;

	for (j = 0; j < max_value; ++j)
	{
		count_array[j + 1] += count_array[j];
		printf("%d, ", count_array[j]);
	}
	count_array[j + 1] += count_array[j];
	printf("%d\n", count_array[j + 1]);

	for (i = 0; i < size; ++i)
	{
		j = count_array[array[i]] - 1;
		if (array[i] != array[j])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	free(count_array);
}
