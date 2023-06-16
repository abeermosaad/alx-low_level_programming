#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: data
 * Return: head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
