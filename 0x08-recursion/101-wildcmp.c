#include "main.h"
/**
 * wildcmp - Main Entry
 * @n1: input
 * @n2: input
 * Return: 0
 */
int wildcmp(char *n1, char *n2)
{
	if (*n1 == '\0')
	{
		if (*n2 != '\0' && *n2 == '*')
		{
			return (wildcmp(n1, n2 + 1));
		}
		return (*n2 == '\0');
	}

	if (*n2 == '*')
	{
		return (wildcmp(n1 + 1, n2) || wildcmp(n1, n2 + 1));
	}
	else if (*n1 == *n2)
	{
		return (wildcmp(n1 + 1, n2 + 1));
	}
	return (0);
}
