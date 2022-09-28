#include "main.h"

/**
 * _pow_recursion - returns the value of parameter x raised to parameter
 * y
 * @x: the number for raise
 * @y: the value to raise x by
 * Return: -1 if y < 0 else return x raised to y
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
