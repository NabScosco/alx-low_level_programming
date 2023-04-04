#ifndef LISTS_OF_H_FILES
#define LISTS_OF_H_FILES

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - The singly linked list
 * @n: The integer
 * @next: This points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes goes here */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
