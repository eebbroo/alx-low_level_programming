#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a linked list
 *
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_pointer;
	dlistint_t *new_node;

	temp_pointer = *head;
	while (temp_pointer && temp_pointer->next != NULL)
		temp_pointer = temp_pointer->next;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp_pointer;
	if (temp_pointer)
		temp_pointer->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
