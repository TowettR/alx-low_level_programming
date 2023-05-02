#include "lists.h"
/**
 * sum_listint - function that calculates the sum of data in a list
 * @head: pointer to first node
 * Return: the result or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
