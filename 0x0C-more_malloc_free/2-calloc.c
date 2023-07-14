#include "main.h"
#include <stdlib.h>

/**
 * _calloc- function that allocates memory for an array,using malloc
 * @nmemb: the input
 * @size: the size of the memory to be printed
 * Return:0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
