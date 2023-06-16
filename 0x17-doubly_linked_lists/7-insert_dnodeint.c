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

	if (h == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp)
	{
		if (cnt == (idx - 1))
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		cnt++;
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
