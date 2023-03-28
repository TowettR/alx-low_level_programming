#include "main.h"
#include <stdio.h>
/**
 * int_strlen - program that returns the length of a string
 * @s:an ectra variable
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\n'; i++)
	{
		count++;
	}
	return (count);
}
