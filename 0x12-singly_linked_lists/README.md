Singly Linked Lists - ALX Low-Level Programming
This repository contains a collection of C programs and functions focused on singly linked lists. The projects in this repository are part of the ALX Low-Level Programming curriculum and aim to teach and reinforce fundamental concepts related to linked lists in C.

Table of Contents
Project Descriptions
Usage
Tasks
Contributing
License
Project Descriptions
0. Print List
The goal of this project is to write a function that prints all the elements of a list_t list. The print_list function takes a pointer to the head of the list and prints the content of each node in the list. If the str field of a node is NULL, it is printed as [0] (nil). This project is designed to help understand the basic structure of a singly linked list and how to traverse and print its elements.

1. List Length
This project focuses on writing a function that returns the number of elements in a list_t list. The list_len function takes a pointer to the head of the list and counts the number of nodes in the list. It provides a fundamental understanding of how to iterate through a linked list and count its elements efficiently.

2. Add Node
The objective of this project is to write a function that adds a new node at the beginning of a list_t list. The add_node function takes a double pointer to the head of the list and a string (str) as input. It creates a new node, duplicates the string, and adds the new node to the beginning of the list. This project teaches how to manipulate linked lists by adding nodes dynamically.

3. Add Node at the End
In this project, the goal is to write a function that adds a new node at the end of a list_t list. The add_node_end function takes a double pointer to the head of the list and a string (str) as input. It creates a new node, duplicates the string, and adds the new node to the end of the list. This project reinforces the concept of appending nodes to a linked list.

4. Free List
The focus of this project is to write a function that frees a list_t list. The free_list function takes the head of the list as input and releases the memory allocated for each node in the list. This project helps understand the importance of memory management when working with linked lists and the significance of freeing allocated memory.

Usage
To use these programs and functions, follow these steps:

Clone this repository to your local machine:

bash
git clone https://github.com/yourusername/alx-low_level_programming.git
Navigate to the appropriate project directory (e.g., 0x12-singly_linked_lists) using the cd command.

Compile the C files using a C compiler such as gcc:

bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o project0
Execute the compiled program:

bash
./project0
Follow the same steps for other projects, replacing the file names accordingly.

Tasks
This repository contains several tasks related to singly linked lists. Each task has its own directory within the repository, and each directory includes the necessary C files to complete that task. The tasks are organized as follows:

Project 0: Print List
Project 1: List Length
Project 2: Add Node
Project 3: Add Node at the End
Project 4: Free List
Each project directory includes example main.c files to demonstrate the usage of the respective functions.

Contributing
Contributions to this repository are welcome. If you find any issues, have suggestions for improvements, or want to add new features, please follow these steps:

Fork the repository.
Create a new branch for your contributions: git checkout -b my-feature
Make your changes and test them thoroughly.
Commit your changes with a meaningful message: git commit -m "Add my feature"
Push your branch to your fork: git push origin my-feature
Create a pull request to submit your changes for review.
