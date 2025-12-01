#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: 0 success
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t temp = h;

	while (temp != NULL)
	{
		printf("%d", temp->n);
		temp = temp->next;
	}
	printf("\n");
	
	return (count);
}
