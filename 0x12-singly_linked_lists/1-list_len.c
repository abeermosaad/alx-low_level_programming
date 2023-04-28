#include "lists.h"

/**
 * list_len - rints all the elements of a list_t list.
 * @h: head
 * Return: Always cnt.
 */

size_t list_len(const list_t *h)
{
	int cnt = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
