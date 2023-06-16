#include "lists.h"
/**
 * free_dlistint -  adds a new node at the end of a dlistint_t list.
 * @head: head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_me;

	while (head)
	{
		free_me = head;
		head = head->next;
		free(free_me);
	}
}
