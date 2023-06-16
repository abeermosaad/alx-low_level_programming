#include "lists.h"
/**
 * insert_dnodeint_at_index -  that inserts a new node at a given position.
 * @h: head
 * @idx: idx
 * @n: n
 * Return: the sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int cnt = 0;
	unsigned int len = 0;

	if (new_node == NULL)
		return (NULL);
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	temp = *h;
	if (idx > len || idx == 0)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (temp)
	{
		if (cnt == idx - 1)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		cnt++;
		temp = temp->next;
	}
	return (NULL);
}
