#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (!head || !index)
		return (NULL);

	while (head != NULL)
	{
		int number = head->next;
		if (number == index)
		{
			return (head->n);
		}

		head = head->next;
	}

	return (NULL);
}