#include "lists.h"

/**
 * free_dlistint -its frees a doubly linked list
 * @head:the pointer to the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
