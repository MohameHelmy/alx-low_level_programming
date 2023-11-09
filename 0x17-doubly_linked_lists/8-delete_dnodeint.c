#include "lists.h"
/**
 * new_func - function too insert at a given index
 * @current: list to insert into
 * @previous: index to insert at
 * Return: int
 */
int new_func(dlistint_t *current, dlistint_t *previous)
{
	if (current->next)
	{
		previous->next = current->next;
		current->next->prev = previous;
	}
	else
	{
		previous->next = NULL;
	}
	free(current);
	return (1);
}
/**
 * delete_dnodeint_at_index - function too insert at a given index
 * @h: list to insert into
 * @idx: index to insert at
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t *current;
	dlistint_t *previous;
	unsigned int i = 0;

	if (!h)
	{
		return (-1);
	}
	current = *h;
	previous = NULL;
	while (current)
	{
		if (i == idx)
		{
			if (previous)
			{
				return (new_func(current, previous));
			}
			else
			{
				if (current->next)
				{
					current->next->prev = NULL;
					(*h) = current->next;
				}
				else
				{
					(*h) = NULL;
				}
				free(current);
				return (1);
			}
		}
		i++;
		previous = current;
		current = current->next;
	}
	free(current);
	return (-1);
}
