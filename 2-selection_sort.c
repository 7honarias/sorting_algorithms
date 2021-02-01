#include "sort.h"

/**
 * selection_sort - sort l_ list
 * @array: list to sort
 * @size: size of list
 * Return: Nothing
 */
 void selection_sort(int *array, size_t size)
 {
	 size_t i = 0, j;
	 int temp;
	
	 while (i < size)
	 {
		 j = i + 1;
		 temp = array[i];
		 while (j < size)
		 {	
			 if (temp > array[j])
			 {
				 temp = array[j];				 
			 }
			 j++;
		 }
		 array[j] = array[i];
		 array[i] = temp;
		 print_array(array, size);
		 i++;
		 
	 }
 }
