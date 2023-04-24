#include "sort.h"
/**
 * bubble_sort - Funxtion to sort an array using buble sort
 * @array: The array being sorted
 * @size: The size of array
 * Return: the sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, k = 0;

	for (; i < size - 1; i++)
	{
		for (; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		for (; k < size; k++)
		{
			printf("%d", array[k]);
		}
		printf("\n");
	}
}
