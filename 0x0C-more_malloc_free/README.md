This project consists of several C programs that explore memory allocation and deallocation using malloc and free functions. Each program addresses a specific task, as described below:

Task 0: Trust no one
Function Prototype: void *malloc_checked(unsigned int b);

This function allocates memory using malloc. If malloc fails, the malloc_checked function will cause normal process termination with a status value of 98.

Task 1: string_nconcat
Function Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);

This function concatenates two strings, s1 and the first n bytes of s2, and returns a pointer to the newly allocated space in memory. If the function fails, it returns NULL. If n is greater than or equal to the length of s2, it uses the entire string s2. If NULL is passed as an argument, it treats it as an empty string.

Task 2: _calloc
Function Prototype: void *_calloc(unsigned int nmemb, unsigned int size);

This function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, it returns NULL. If malloc fails, it also returns NULL.

Task 3: array_range
Function Prototype: int *array_range(int min, int max);

This function creates an array of integers containing values from min to max (inclusive). The array is ordered from min to max, and the function returns a pointer to the newly created array. If min is greater than max, it returns NULL. If malloc fails, it also returns NULL.
