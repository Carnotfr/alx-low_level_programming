Project Overview

This project, "0x10. C - Variadic Functions," involves working with variadic functions in C. Variadic functions are functions that can accept a variable number of arguments. This project consists of four tasks, each with its own objective and implementation.

Task 0: Beauty is variable, ugliness is constant

The objective of this task is to write a function named sum_them_all that returns the sum of all its parameters.
The function takes in a variable number of arguments.
If the parameter n is 0, it returns 0.
Task 1: To be is to be the value of a variable

In this task, you need to write a function named print_numbers that prints numbers, followed by a new line.
The function takes three parameters: separator (the string to be printed between numbers), n (the number of integers passed to the function), and a variable number of integer arguments.
If separator is NULL, it should not be printed.
A new line should be printed at the end of the function.
Task 2: One woman's constant is another woman's variable

Task 2 involves writing a function called print_strings that prints strings, followed by a new line.
The function takes three parameters: separator (the string to be printed between the strings), n (the number of strings passed to the function), and a variable number of string arguments.
If separator is NULL, it should not be printed.
If one of the strings is NULL, it should print (nil) instead.
A new line should be printed at the end of the function.
Task 3: To be is a to be the value of a variable

In this task, you are required to write a function named print_all that prints anything.
The function takes a format string (format) followed by a variable number of arguments.
The format string specifies the types of arguments that follow. It can contain the following format specifiers: c (char), i (integer), f (float), and s (char *).
If the string is NULL, it should print (nil) instead.
Any other character in the format string should be ignored.
The function should not use certain constructs like for, goto, ternary operators, else, and do...while.
A new line should be printed at the end of the function.
Each task has a corresponding example provided to illustrate its functionality. Completing these tasks will enhance your understanding of variadic functions in C.

Repo Information

GitHub Repository: alx-low_level_programming
Directory: 0x10-variadic_functions
Relevant Files: 0-sum_them_all.c, 1-print_numbers.c, 2-print_strings.c, 3-print_all.c, variadic_functions.h, main.c (for each task)
