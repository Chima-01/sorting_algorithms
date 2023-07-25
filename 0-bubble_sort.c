#include "sort.h"

/**
 * bubble_sort - This functions implements a prototype of bubble sort to sort
 * an array of numbers in ascending order
 * @array: array to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		if (i == 0)
			print_array(array, size);

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				flag = 1;
			}
		}

		print_array(array, size);
		if (flag == 0)
			break;
	}
}

/**
 * swap - This function swaps two values
 * @a: number at a
 * @b: number at b
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
