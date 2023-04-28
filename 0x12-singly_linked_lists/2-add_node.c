#include "lists.h"

/**
 * add_node - .
 * @head: head
 * @str: string
 * Return: Always cnt.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	char *new_str;

	if (ptr == NULL)
		return (NULL);
	new_str = strdup(str);

	ptr->next = *head;
	ptr->str = new_str;
	ptr->len = (int)strlen(new_str);
	*head = ptr;
	free(ptr);
	return (*head);
}
