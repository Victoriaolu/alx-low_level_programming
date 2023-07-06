#include "main.h"
/**
 * _strlen_recursion -The main entry
 * @s:the input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
