
#include "sort.h"

/**
 * Quicksort - sorts function to find the partition position
 * @array: The array to sort
 * @draw: The starting index
 * @high: The ending index
 * @size: The size of the array
 * Return: privot idx
 */
int Quicksort(int *array, int draw, int high, size_t size)
{
	int p, i = draw - 1;
	int pivot, temp;

	if (array == NULL || draw >= high)
		return (0);

	pivot = array[high];

	for (p = draw; p <= high - 1; p++)
	{
		if (array[p] < pivot)
		{
			i++;
			if (i != p)
			{
				temp = array[i];
				array[i] = array[p];
				array[p] = temp;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}



/**
 * quicksort - sorts an array of integers using the QuickSort algorithm
 * @array: The array to be sorted
 * @draw: The starting index
 * @high: The ending index
 * @size: The size of the array
 * Return: No return
 */

void quicksort(int *array, int draw, int high, size_t size)
{
	int privot;

	if (draw < high)
	{
		privot = Quicksort(array, draw, high, size);

		quicksort(array, draw, privot - 1, size);
		quicksort(array, privot + 1, high, size);
	}
}


/**
 * quick_sort - sorts an array of integers using the QuickSort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: No return
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
		quicksort(array, 0, size - 1, size);
}

