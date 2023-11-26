#ifndef __SORT__
#define __SORT__


#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*======================================================================*/
/*=================         Printing Algoritms        ==================*/
/*======================================================================*/

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


/*======================================================================*/
/*=================          sorting Algoritms        ==================*/
/*======================================================================*/

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);


#endif /* __SORT__ */
