#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from0-14 10 times
 * return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		if (j >= 10)
		putchar('1');
		putchar(j % 10 == '0');
	}
	putchar('\n');
}
