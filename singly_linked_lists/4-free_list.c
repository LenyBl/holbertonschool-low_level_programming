#include "lists.h"
/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		printf("La liste est vide");

	free(head);
}
