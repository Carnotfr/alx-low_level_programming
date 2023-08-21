#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array
 * @a: array name
 * @n: number of elements in the array
 *
 * Return: Always void.
 */
void print_array(int *a, int n)
{
    int x;

    for (x = 0 ; x < n; x++)
    {
        printf("%d", a[x]);
        if (x != n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}
