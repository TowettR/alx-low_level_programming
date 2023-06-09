#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function that returns value x raised to power y
 * @x: input
 * @y: input
 * Return: Always 0
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
