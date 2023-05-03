#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp = NULL;
	size_t count = 0, i;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* check for loop */
		if (current > current->next)
		{
			temp = head;
			for (i = 0; i < count; i++)
			{
				if (temp >= current->next && temp < current)
				{
					printf("-> [%p] %d\n", (void *)current->next, current->next->n);
					return (count);
				}
				temp = temp->next;
			}
		}

		current = current->next;
	}

	return (count);
}
