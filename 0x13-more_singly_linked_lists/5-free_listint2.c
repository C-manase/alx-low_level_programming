#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: pointer to a pointer to thehe first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head != 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}

}
