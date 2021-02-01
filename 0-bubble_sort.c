#include "sort.h"
/**
 * bubble_sort - sort list asending
 * @array: array for sort
 * @size: size of list
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int j = 1;
	int tmp;

	if (array == NULL || size < 2)
		return;
	while (j)
	{
		j = 0;
		for (i = 1; i < size; i++)
		{	
			if (array[i] < array[i-1])
			{
				tmp = array[i];
				array[i] = array[i-1];
				array[i-1] = tmp;
				j = 1;
				print_array(array, size);
			}
		}	
	}
}
