#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: The array of integer
 * @size: The size of the array
 *
 * Return: no return
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (array == NULL || size == 0)
		return;

	for (j = 0; j < size; j++)
	{
		min = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min])
			{
				min = i;
			}
		}

		{
			temp = array[j];
			array[j] = array[min];
			array[min] = temp;
			if (min != j)
				print_array(array, size);
		}
	}
}
