#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index
 * index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (index starts at 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;
if (head == NULL || *head == NULL)
{
return (-1);
}
current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
prev = NULL;
for (i = 0; i < index; i++)
{
if (current == NULL)
{
return (-1);
}
prev = current;
current = current->next;
}
if (current != NULL)
{
if (prev != NULL)
{
prev->next = current->next;
}
else
{
*head = current->next;
}
free(current);
return (1);
}
return (-1);
}
