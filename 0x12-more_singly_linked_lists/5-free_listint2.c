#include "lists.h"
/**
 * free_listint2 - Entry Point
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
