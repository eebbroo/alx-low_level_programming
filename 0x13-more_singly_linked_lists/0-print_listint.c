#include "lists.h"

/**
 * print_listint- Fucntion that prints all elements of a linked list
 *
 * @h: pointer to the first node
 *
 * Return: Return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count, values;

	count = 0;
	while (temp != NULL)
	{
		values = temp->n;
		printf("%lu\n", values);
		temp = temp->next;
		count++;
	}
	return (count);
}
