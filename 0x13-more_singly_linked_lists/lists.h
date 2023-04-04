#ifndef LISTS_OF_H_FILES
#define LISTS_OF_H_FILES

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - The singly linked list
 * @data: The integer
 * @link: This points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int data;
	struct node *link;
} listint_t;

/* Function prototypes goes here */
size_t print_listint(const listint_t *h);

#endif
