#include "sort.h"

/**
 * bubble_sort - sort an array in ascending order.
 *
 * @array: The array to be sorted.
 * @size: The size of the array to be sorted.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t b, d, swp, temp = 0;

	if (array == NULL || size <= 1)
		return;
	for (b = 0; b <= size - 2; b++)
	{
		swp = 0;
		for (d = 0; d <= size - b - 2; d++)
		{
			if (array[d] > array[d + 1])
			{
				temp = array[d];
				array[d] = array[d + 1];
				array[d + 1] = temp;
				print_array(array, size);
				swp = 1;
			}
		}
		if (swp == 0)
			break;
	}
}
