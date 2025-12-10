#include "sort.h"
void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
/**
* swap_ints - Swap two integers in an array.
* @a: The first integer to swap.
* @b: The second integer to swap.
*/
void swap_ints(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
/**
* lomuto_partition - partion scheme implemented
* @array: pointer to interger array
* @size: size of array
* @left: interger left
* @right: interger right
* Return: The final partition index.
*/
int lomuto_partition(int *array, size_t size, int left, int right)
{
int *pivot, i, j;
pivot = array + right;
for (i = j = left; j < right; j++)
{
if (array[j] < *pivot)
{
if (i < j)
{
swap_ints(array + j, array + i);
print_array(array, size);
}
i++;
}
}
if (array[i] > *pivot)
{
swap_ints(array + i, pivot);
print_array(array, size);
}
return (i);
}
/**
* lomuto_sort - Implement the quicksort algorithm through recursion.
* @array: An array of integers to sort.
* @size: The size of the array.
* @left: The starting index of the array partition to order.
* @right: The ending index of the array partition to order.
* Description: Uses the Lomuto partition scheme.
*/
void lomuto_sort(int *array, size_t size, int left, int right)
{
int part;
if (right - left > 0)
{
part = lomuto_partition(array, size, left, right);
lomuto_sort(array, size, left, part - 1);
lomuto_sort(array, size, part + 1, right);
}
}
/**
* quick_sort - Sort an array of integers in ascending
*              order using the quicksort algorithm.
* @array: array after each time you swap two elements
* @size: size of array
*
* Description: Uses the Lomuto partition scheme. Prints
*              the array after each swap of two elements.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
lomuto_sort(array, size, 0, size - 1);
}
