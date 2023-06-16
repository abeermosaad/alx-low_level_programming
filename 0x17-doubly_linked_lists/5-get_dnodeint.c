#include "lists.h"
/**
 * get_dnodeint_at_index -  prints all the elements of a dlistint_t list.
 * @head: head
 * @index: index
 * Return: the nth
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t cnt = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (cnt == index)
		{
			return (temp);
		}
		temp = temp->next;
		cnt++;
	}
	return (NULL);
}
