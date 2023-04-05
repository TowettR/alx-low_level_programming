#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - function that returns string length
 * @s: input
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
