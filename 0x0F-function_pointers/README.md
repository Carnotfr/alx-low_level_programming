Function Pointers
This project explores the concept of function pointers in C. It includes several tasks that demonstrate how function pointers can be used to create flexible and dynamic code.

Task 0: What's my name
In this task, you need to write a C function that prints a name. The function should take a name and a function pointer as arguments and use the provided function pointer to print the name in a specific format.

Prototype: void print_name(char *name, void (*f)(char *));
Task 1: If you spend too much time thinking about a thing, you'll never get it done
Task 1 requires you to write a function that executes another function on each element of an array. You'll create a function that takes an array, its size, and a function pointer as arguments and applies the provided function to each element of the array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
Task 2: To hell with circumstances; I create opportunities
In this task, you'll write a function that searches for an integer in an array using a provided comparison function. The function should return the index of the first element that matches the criteria specified by the comparison function.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at
Task 3 involves creating a program that performs simple operations (addition, subtraction, multiplication, division, and modulo) on two integers. The program takes input in the form of "calc num1 operator num2" and prints the result of the operation.

Usage: calc num1 operator num2
Operators: +, -, *, /, %
Error handling: Check for invalid input and division by zero.
The program consists of several files:

3-calc.h: Header file containing function prototypes and data structures.
3-op_functions.c: Implementation of the operation functions (e.g., addition, subtraction).
3-get_op_func.c: Function to select the correct operation function based on the provided operator.
3-main.c: Main program that parses input and performs the requested operation.
Each task provides an opportunity to explore the flexibility and power of function pointers in C programming.

Compilation and Example:

shell
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1   # Example usage
Save to grepper
This project allows you to practice your skills in C and gain a deeper understanding of function pointers and their applications.

GitHub Repository: alx-low_level_programming

Directory: 0x0F-function_pointers
