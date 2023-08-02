#include "lists.h"

/**
 * sum_listint -its returns the sum of all the data (n) of
 * a linked list.
 * @head:the head of a list.
 *
 * Return:the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
