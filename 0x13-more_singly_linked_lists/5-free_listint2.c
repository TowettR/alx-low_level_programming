#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: pointer to first node
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		ptr = *head;
		head = NULL;
	}
}
