#include "lists.h"

/**
 * add_nodeint- a function that adds a new node at
 * the beginning of a listint_t list
 *
 *@head: Head pointer of the linked list
 *@n: The data of the newly added node
 *
 * Return: Return address of the new element,
 * Or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	if (newnode == NULL)
		return (NULL);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
