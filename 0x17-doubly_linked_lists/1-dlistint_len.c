#include "lists.h"
/**
 * dlistint_len -  prints all the elements of a dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t cnt = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp)
	{
		cnt++;
		temp = temp->next;
	}
	return (cnt);
}
