#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: first pointer
 * Return: Always 0;
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
