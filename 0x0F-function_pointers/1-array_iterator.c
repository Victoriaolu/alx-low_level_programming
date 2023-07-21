#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -its print an integer
 * @array: the integer to print
 * @action: is a pointer to the function
 * @size: the size of the array
 *
 * Return: nothing.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
