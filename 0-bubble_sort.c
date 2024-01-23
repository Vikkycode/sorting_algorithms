#include "sort.h"

/**
 * bubble_sort-Function sorts arrays of integers in ascending order
 * @array: array of integers to be sorted
 * @size: size of the array yo be sorted
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	size_t p;
	int swap;

	if (size < 2)
		return;

	for (j = 0; j < size; j++)
	{
		p = 0;
		for (p = 0; p + 1 < size; p++)
		{
			if (array[p] > array[p + 1])
			{
				/* re-arrangr/ swap the numbers if not orderly arranged*/

				swap = array[p + 1];
				array[p + 1] = array[p];
				array[p] = swap;

				/* Print array after each swap */
				print_array(array, size);
			}
			/* Continue to the next iteration */
			continue;
		}
	}
}
