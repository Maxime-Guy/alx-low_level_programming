#include "lists.h"

/**
 * free_listint - frees a linked list of type listint_t
 * @head: a pointer to the head struct of the linked list
 * Return: No Value
 */
void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
