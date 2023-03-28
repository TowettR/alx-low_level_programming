#include "main.h"
#include <stdio.h>
/**
 * swap_int - Function that swaps the values of two integers
 * @a: value 1
 * @b:value 2
 * Return: Always 0 (successs)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
