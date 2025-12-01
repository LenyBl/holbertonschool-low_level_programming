#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str && str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (*head->next != NULL)
	{
		*head = head->next;
	}
	*head->next = new_node;
}
