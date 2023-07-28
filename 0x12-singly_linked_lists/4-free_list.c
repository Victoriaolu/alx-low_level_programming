#include <stdlib.h>
#include "lists.h"
/**
 * free_list -its frees a linked list
 * @head:the pointer to list
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
