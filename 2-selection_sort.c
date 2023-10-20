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
	size_t i, j, num;
	int tmp;

	if (array == NULL || size == 0)
		return;

	for (j = 0; j < size - 1; j++)
	{
		num = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[num])
			{
				num = i;
			}
		}

		if (num != j)
		{
			tmp = array[j];
			array[j] = array[num];
			array[num] = tmp;
			print_array(array, size);
		}
	}
}
