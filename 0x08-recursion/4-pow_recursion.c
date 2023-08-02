#include "main.h"
/**
 * _pow_recursion - begins executing value of x raised to the power y
 * @x: input value to multiply
 * @y: input times to multiply
 *
 * Return: value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
