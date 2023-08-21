#include "main.h"

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    print_array(array, size);

    return 0;
}
