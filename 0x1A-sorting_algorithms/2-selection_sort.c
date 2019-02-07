#include "sort.h"

/**
 * selection_sort - swaps in order by comparing from marker
 * @array: the array
 * @size: array length size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, walker = 0, to_swap = 0;
	int to_comp = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		to_comp = array[i];
		to_swap = i;
		for (walker = i; walker < size; walker++)
		{
			if (array[walker] < to_comp)
			{
				/* Setting index to swap*/
				to_swap = walker;
				/* Setting new minimum */
				to_comp = array[walker];
			}
		}
		/* No match found means these are equal */
		if (to_swap != i)
		{
			array[i] += array[to_swap];
			array[to_swap] = array[i] - array[to_swap];
			array[i] -= array[to_swap];
			print_array(array, size);
		}
	}
}
