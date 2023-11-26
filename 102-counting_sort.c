#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order using
 * the Counting sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void counting_sort(int *array, size_t size)
{
	int i, *count, max = array[0];
	size_t idx = 0, cnt;

	if (array == NULL || size <= 1)
		return;

	for (cnt = 1; cnt < size; ++cnt)
	{
		if (array[cnt] > max)
			max = array[cnt];
	}

	count = malloc((max + 1) * sizeof(int));

	if (count == NULL)
		return;
	for (i = 0; i <= max; ++i)
		count[i] = 0;
	for (cnt = 0; cnt < size; ++cnt)
		count[array[cnt]]++;
	for (i = 0; i <= max; ++i)
		printf("%d, ", count[i]);
	printf("\n");

	for (i = 0; i <= max; ++i)
	{
		while (count[i] > 0)
		{
			array[idx++] = i;
			count[i]--;
		}
	}
	free(count);
}
