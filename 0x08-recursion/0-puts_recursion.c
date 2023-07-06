#include "main.h"
/**
 * _puts_recursion- the main entry
 * @s: the input
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	if (*(s) == '\0')
	{
		_putchar('\n');
	}
}
