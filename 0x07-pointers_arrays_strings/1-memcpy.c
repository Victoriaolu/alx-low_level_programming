#include "main.h"

/**
 * _memcpy - A function that copies memery area
 *@dest: memory where it is stored
 *@src: memory where it is copied
 *@n: number of bytes
 *Return: copied memory with the n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
