#include "sort.h"

/**
 * swap_nodesLeftToRight - swaps nodes from left to right
 * @list: pointer to list
 * @current: pointer to current node
 * @nodeToSwap: auxiliary pointer
 * Return: no return
 */
void swap_nodesLeftToRight(listint_t **list, listint_t *current, listint_t *node)
{
	if (current->prev)
		current->prev->next = node;
	else
		*list = node;

	if (node->next)
		node->next->prev = current;

	current->next = node->next;
	node->prev = current->prev;
	node->next = current;
	current->prev = node;

	print_list(*list);
}

/**
 * swap_nodesRightToLeft - swaps nodes from right to left
 * @list: pointer to list
 * @current: pointer to current node
 * @nodeToSwap: auxiliary pointer
 * Return: no return
 */
void swap_nodesRightToLeft(listint_t **list, listint_t *current, listint_t *node)
{
	node = current->prev;
	node->next->prev = node->prev;

	if (node->prev)
		node->prev->next = node->next;
	else
		*list = node->next;

	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;

	if (node->next)
		node->next->prev = node;
	print_list(*list);
}

/**
 * cocktail_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Cocktail sort algorithm
 * @list: pointer to the list head
 * Return: no return
 **/
void cocktail_sort_list(listint_t **list)
{
	listint_t *current, *nodeToSwap;
	int flag = 1;

	if (list)
	{
		current = *list;
		while (flag != 0)
		{
			flag = 0;
			while (current->next)
			{
				if (current->n > current->next->n)
				{
					nodeToSwap = current->next;
					swap_nodesLeftToRight(list, current, nodeToSwap);
					flag = 1;
				}
				else
					current = current->next;
			}
			if (flag == 0)
				break;

			flag = 0;
			while (current->prev)
			{
				if (current->prev->n > current->n)
				{
					swap_nodesRightToLeft(list, current, nodeToSwap);
					flag = 1;
				}
				else
					current = current->prev;
			}
		}
	}
}
