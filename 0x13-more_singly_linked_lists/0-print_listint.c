#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list
 * @h: header pointing to the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h  == NULL)
	printf("list is empty");

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
