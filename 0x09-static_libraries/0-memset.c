#include "main.h"

/**
 * _memset- A function that fills the block of memory with a specific value
 * @s:The starting address of memory to be filled
 * @b:The value desired
 * @n:The number of bytes to be changed
 * Return:changed array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
