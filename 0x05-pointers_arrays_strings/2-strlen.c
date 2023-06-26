#include "main.h"

/**
 * _stren - returns the length of @s
 * @s: the string
 * Return:lenght of @s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
