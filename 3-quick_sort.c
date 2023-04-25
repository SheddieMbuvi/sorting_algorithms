#include "sort.h"
/**
 * quick_sort - function for quick sort
 * @array: Array being sorted
 * @size: size of array
 * Return: Sortel array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_s(array, 0, size - 1, size);
}
/**
 * divide - divide into partition
 * @array: array
 * @low: lower limit
 * @high: higher limit
 * @size: array's size
 * Return: i
 */
int divide(int *array, int low, int high, size_t size)
{
	int i = low - 1, j = low;
	int pivot = array[high], temp = 0;

	for (; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_s - quick sort
 * @array: given array
 * @low: lower limit
 * @high: higher limit
 * @size: array's size
 * Return: void
 */
void quick_s(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = divide(array, low, high, size);
		quick_s(array, low, pivot - 1, size);
		quick_s(array, pivot + 1, high, size);
	}
}
