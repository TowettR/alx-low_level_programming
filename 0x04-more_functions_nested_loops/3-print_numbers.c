#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 1-9
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
