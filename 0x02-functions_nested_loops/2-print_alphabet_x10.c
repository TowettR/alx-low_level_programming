
#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int c;
	char d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar('\n');
	}
}

