#include "lists.h"

/**
 * dlistint_len - counts and returns num elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t Numb_nodes = 0;

	while (h)
	{
		h = h->next;
		Numb_nodes++;
	}
	return (Numb_nodes);
}
