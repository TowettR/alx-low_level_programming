#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that prin ts every other character of a string
 * @str: parameter
 * Return: always 0 (success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
