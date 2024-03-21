#include <stdio.h>
#include "lists.h"  // Include the header file containing the struct definition

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0; // Counter for the number of nodes

    // Traverse the list while h is not NULL
    while (h != NULL)
    {
        printf("%d\n", h->n); // Print the value of the current node
        h = h->next; // Move to the next node
        node_count++; // Increment node count
    }

    return node_count; // Return the number of nodes
}

