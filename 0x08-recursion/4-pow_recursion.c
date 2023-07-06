#include "main.h"
/**
 * _pow_recursion - the main entry
 * @x: the input
 * @y:the input
 * Return:0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
