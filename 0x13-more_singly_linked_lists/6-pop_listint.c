#include "lists.h"
/**
 * pop_listint - frees a listint_t list.
 * @head: the head of listint_t list.
 * Return: head node’s data (n) or 0 :)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (!(temp->next))
		return (0);
	*head = (*head)->next;
	return (temp->n);
}
