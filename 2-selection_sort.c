#include "sort.h"

/**
 * selection_sort - sort l_ list
 * @array: list to sort
 * @size: size of list
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t min, current = 0, plus; 
	int temp;

	while (current < size)
	{
		min = current;
		for (plus = current; plus < size; plus++)
		{
			if (array[min] > array[plus])
			{
				min = plus;
			}
		}
		if (array[current] != array[min])
		{
			temp = array[current];
			array[current] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		current++;
	}
}
