#include "sort.h"
/**
 * bubble_sort - Funxtion to sort an array using buble sort
 * @array: The array being sorted
 * @size: The size of array
 * Return: the sorted array
 */
void bubble_sort(int *array, size_t size)
{

	size_t i = 0, j = 0;
	int tmp = 0;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; i++)
		for (; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
			tmp = array[j + 1];
			array[j + 1] = array[j];
			array[j] = tmp;
			print_array(array, size);
			}
		}
}
