Bit Manipulation Project
This project, located within the "alx-low_level_programming" GitHub repository, focuses on bit manipulation in the C programming language. It contains several C functions that allow you to perform various operations on bits, including converting binary numbers, printing binary representations, and manipulating individual bits. Below, you'll find a brief overview of each task and its corresponding source file.

Task 0 - 0-binary_to_uint.c
This task involves writing a function that converts a binary number represented as a string into an unsigned integer. The function binary_to_uint takes a binary string as input and returns the equivalent unsigned integer value. It returns 0 if there are any characters in the string that are not '0' or '1' or if the string is NULL.

File: 0-binary_to_uint.c
Task 1 - 1-print_binary.c
Task 1 requires the implementation of a function that prints the binary representation of a given unsigned long integer without using arrays, malloc, or the % or / operators. The function print_binary prints the binary representation to the standard output.

File: 1-print_binary.c
Task 2 - 2-get_bit.c
For this task, a function get_bit is created to retrieve the value of a specific bit at a given index from an unsigned long integer. The function takes two arguments: the integer n and the index index. It returns the value of the bit at the specified index or -1 if an error occurs.

File: 2-get_bit.c
Task 3 - 3-set_bit.c
Task 3 involves writing a function set_bit that sets the value of a bit at a given index to 1 in an unsigned long integer. The function takes a pointer to the integer n and the index index. It returns 1 if the operation succeeds and -1 if an error occurs.

File: 3-set_bit.c
Task 4 - 4-clear_bit.c
This task requires implementing a function clear_bit to set the value of a bit at a given index to 0 in an unsigned long integer. Similar to the previous task, the function takes a pointer to the integer n and the index index. It returns 1 if the operation succeeds and -1 if an error occurs.

File: 4-clear_bit.c
Task 5 - 5-flip_bits.c
Task 5 focuses on writing a function flip_bits that calculates the number of bits that need to be flipped to convert one unsigned long integer into another. The function takes two unsigned long integers, n and m, and returns the count of bits that differ between them.

File: 5-flip_bits.c
Each task's source file is included in the project directory within the "0x14-bit_manipulation" subdirectory. You can explore and test these functions to understand their behavior and how they contribute to bit manipulation operations in C.
