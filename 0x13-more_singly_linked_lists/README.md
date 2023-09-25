# Singly Linked List Operations

This repository contains a collection of C functions that perform various operations on singly linked lists. Each function is designed to work with the following singly linked list structure:

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

Table of Contents
Print List
List Length
Add Node
Add Node at the End
Free List
Free List and Set Head to NULL
Delete Head Node
Get Node at Index
Sum of List Elements
Insert Node at Index
Delete Node at Index
Usage
Each C file in this repository corresponds to one of the linked list operations mentioned above. To use these functions, include the respective C file in your project and call the functions as needed.

Example
Here's an example of how to use the "Print List" function:

c

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head;

    /* Create a linked list */
    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    
    /* Print the linked list and get the number of nodes */
    size_t num_nodes = print_listint(head);
    printf("Number of nodes: %lu\n", num_nodes);

    /* Free the linked list */
    free_listint(head);

    return (0);
}
