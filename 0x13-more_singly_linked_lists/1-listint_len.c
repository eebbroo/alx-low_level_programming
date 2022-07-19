#include "lists.h"

/**
 * listint_len - Funtion to return the number of nodes
 *
 * @h: pointer to the list
 *
 * Return: return the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
