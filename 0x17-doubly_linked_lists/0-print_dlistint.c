#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t cnt = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp)
	{
		cnt++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (cnt);
}
