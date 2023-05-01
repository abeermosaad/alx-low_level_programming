#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head : the head of listint_t list.
 * Return: none :)
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
