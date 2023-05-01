#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head : the head of listint_t list.
 * Return: none :)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if ((!(head)))
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
