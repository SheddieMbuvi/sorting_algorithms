#include "sort.h"
/**
 * bubble_sort - Funxtion to sort an array using buble sort
 * @array: The array being sorted
 * @size: The size of array
 * Return: the sorted array
 */
void bubble_sort(int *array, size_t size)
{

	size_t i = 0, j = 0, tmp = 0;

	if (size < 2)
		return;
	for (; i < size; i++)
		for (; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = tmp;
			print_array(array, size);
			}
		}
}
