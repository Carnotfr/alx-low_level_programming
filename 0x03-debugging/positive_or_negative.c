#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is positive.\n", number);
    }
    else if (number < 0)
    {
        printf("%d is negative.\n", number);
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}
