#include "sort.h"

/**
 * bubble_sort - sorts by comparison of 2 at a time
 * @array: array input
 * @size: size of array length
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int sorted = 1;
	size_t i;

	if (size < 2)
		return;

	while (sorted == 1)
	{
		sorted = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				array[i] += array[i + 1];
				array[i + 1] = array[i] - array[i + 1];
				array[i] -= array[i + 1];
				print_array(array, size);
				sorted = 1;
			}
		}
	}
}
