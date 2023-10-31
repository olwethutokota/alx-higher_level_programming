/*
 * File: 13-insert_number.c
 * Auth: Olwethu Tokota
 */

#include "lists.h"

/**
 * insert_node - ....
 * @head: ....
 * @number: ....
 * return: ....
 */
listint_t *insert_node(listint_t **head,
	int number)
{
	listint_t *node = *head, *new;

	new->next = node;
	*head = new;
	return (new);
}

while (node && node - > next && node -
		> next - > n < number)
node = node->next;

new->next = node->next;
node->next = new;

return (new);
}

