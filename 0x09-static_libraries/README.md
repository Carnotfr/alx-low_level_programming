C Programming Challenges Repository: 0x09-static-libraries
Welcome to the C Programming Challenges Repository! This repository contains a series of programming exercises aimed at enhancing your skills in working with static libraries in the C programming language.
Task 0: Create a Static Library
Description: In this task, you are required to create a static library named libmy.a. This library contains various functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If you haven't implemented all of the above functions, create empty ones with the correct prototypes. Ensure that your main.h file contains prototypes for all these functions.

Task 1: Create a Script to Generate a Static Library
Description: In this task, you need to create a script called create_static_lib.sh. This script will generate a static library called liball.a from all the .c files present in the current directory.
