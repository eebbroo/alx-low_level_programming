#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *mylist;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(mylist->str);
		free(mylist);
	}
}
