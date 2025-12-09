#include "sort.h"
/**
* swap_nodes - Funtion that sorts a doubly linked list of integers in ascending 
* @h: double pointer h
* @n 1: double pointer n1
* @n 2: pointer n2
* Return: the big O notations of the time complexity of the Insertion sort
*/
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
(*n1)->next= n2->next;
if(n2->next != NULL)
n2->next->prev = *n1,
n2->prev = (*n1)->prev;
n2->new = *n1;
if((*n1)->prev != NULL)
(*n1)->prev->next = n2;
*h = n2;
(*n1)->prev = n2;
*n1 = prev = n2;
*n1 = n2->prev;
}

}