#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: The array of integers
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t  j, p, i;
	int temp;

	if (size == 0 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{

        p = i - 1;
		for (j = 0; j < size = p; j++)
		{
			if (array[j] > array[j + 1])

			{

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);

			}
		}
	}
}
