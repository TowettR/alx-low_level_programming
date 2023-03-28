#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints string followed by new line
 * @str: function parameter
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
