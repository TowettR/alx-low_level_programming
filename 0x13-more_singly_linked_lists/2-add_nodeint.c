#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning
 * @head: old head node
 * @ptr: new pointer
 * Return: new address or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t*ptr;

	ptr = malloc(sizeof(listint_t));
			ptr->n = n;
			ptr->next = NULL;
			
			ptr->next = *head;
			*head = ptr;
			return (ptr);
			if (!ptr)
			return (NULL);
}
