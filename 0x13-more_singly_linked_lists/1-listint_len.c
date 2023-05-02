#include "lists.h"
/**
 * listint_len - function that returns number of elements
 * @h: header of the list
 * Return: Always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		printf("linked list is empty");
	while (h != NULL)
	{
		printf("%ld", num);
		num++;
		h = h->next;
	}
	return(num);
}
