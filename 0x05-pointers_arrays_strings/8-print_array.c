#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array
 * @a: array name
 * @n: number of elements in the array
 * Return: Always void.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);

        if (i < n - 1) // Print comma and space for all elements except the last one
        {
            printf(", ");
        }
    }
    printf("\n");
}
