#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that printys ba string in reverse
 * @s: parameter
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int i;
	int count = 0;
	
	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
