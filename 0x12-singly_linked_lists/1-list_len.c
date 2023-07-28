#include "lists.h"
/**
 * list_len -its Calculate the number of elements
 * @h:the Pointer to a list
 * Return:the integer
 **/
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int counter = 0;
temp = h;
while (temp)
{
counter++;
temp = temp->next;
}
return (counter);
}
