#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y.
 * @x: input
 * @y: input
 * Return: Always 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
