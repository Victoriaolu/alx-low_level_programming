#include "main.h"

/**
 * set_bit -its sets the value of a bit at a given index to 1.
 * @n: the pointer to the bit.
 * @index:  index to set the value at - indices start at 0.
 *
 * Return: if an error occurs - -1.
 *         otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);

