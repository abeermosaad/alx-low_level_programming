#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked
 * @h: head
 * Return: cnt.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int cnt = 0;

	while (ptr)
	{
		cnt++;
		ptr = ptr->next;
	}
	return (cnt);
}
