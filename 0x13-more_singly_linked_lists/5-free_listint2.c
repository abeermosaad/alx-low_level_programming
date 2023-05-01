#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head : the head of listint_t list.
 * Return: none :)
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	ptr = *head;
	if (!ptr || (!(*head)))
		return;
	while (ptr)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	*head = NULL;
}
