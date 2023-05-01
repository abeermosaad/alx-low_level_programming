#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: head
 * Return: cnt.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int cnt = 0;

	while (ptr)
	{
		cnt++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (cnt);
}
