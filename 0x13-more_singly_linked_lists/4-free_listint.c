#include "lists.h"

/**
 *free_listint - Frees a list
 *@head: pointer to the first node
 *Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
