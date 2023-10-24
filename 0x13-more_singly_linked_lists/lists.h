#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: Integer data to be stored in the node
 * @next: Pointer to the next node in the list
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif /* LISTS_H */