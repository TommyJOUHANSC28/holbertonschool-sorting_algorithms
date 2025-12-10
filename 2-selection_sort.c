#include "sort.h"
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
* selection_sort - function that sorts an array of integers in ascending
*                   order using the Selection sort algorithm
* @array: pointer to interger array after each time you swap two elements
* @size: size
* Return: 1 notation per line in the best case
*                             in the average case
*                             in the worst case
*/
void selection_sort(int *array, size_t size)
{
int *mini;
size_t i, j;
if (array == NULL || size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
{
mini = array + i;
for (j = i + 1; j < size; j++)
{
mini = (array[j] < *mini) ? (array + j) : mini;
if ((array + i) != mini)
{
swap_ints(array + i, mini);
print_array(array, size);
}
}
}
}
