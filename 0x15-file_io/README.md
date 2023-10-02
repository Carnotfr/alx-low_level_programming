# Project Overview: File I/O in C

In this series of C programming projects, you are tasked with working on file input and output (I/O) operations using the C standard library and system calls. These projects help you gain a deeper understanding of working with files, file descriptors, and error handling in C. Below, you will find an overview of each project along with sample code and usage instructions.

## Project 0: Tread lightly, she is near

### Description
The goal of this project is to create a C function `read_textfile` that reads a text file and prints its content to the POSIX standard output. The function takes the following parameters:
- `filename`: A pointer to the name of the file to read.
- `letters`: The number of letters to read and print.

### Function Prototype
```c
ssize_t read_textfile(const char *filename, size_t letters);
```

### Return Value
- The function returns the actual number of letters it could read and print.
- If the file cannot be opened or read, it returns 0.
- If `filename` is NULL, it returns 0.
- If writing fails or does not write the expected amount of bytes, it returns 0.

### Sample Usage
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv) {
    ssize_t n;

    if (argc != 2) {
        dprintf(2, "Usage: %s filename\n", argv[0]);
        exit(1);
    }

    n = read_textfile(argv[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(argv[1], 1024);
    printf("\n(printed chars: %li)\n", n);

    return 0;
}
```

## Project 1: Under the snow

### Description
In this project, you are required to create a C function `create_file` that creates a file and writes content to it. The function takes the following parameters:
- `filename`: The name of the file to create.
- `text_content`: A NULL-terminated string to write to the file.

### Function Prototype
```c
int create_file(const char *filename, char *text_content);
```

### Return Value
- The function returns 1 on success.
- It returns -1 on failure (if the file cannot be created, written to, or if writing fails).

### Additional Requirements
- The created file must have permissions `rw-------`.
- If the file already exists, do not change its permissions.
- If `filename` is NULL, the function returns -1.
- If `text_content` is NULL, it creates an empty file.

### Sample Usage
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv) {
    int result;

    if (argc != 3) {
        dprintf(2, "Usage: %s filename text\n", argv[0]);
        exit(1);
    }

    result = create_file(argv[1], argv[2]);
    printf("-> %i)\n", result);

    return 0;
}
```

## Project 2: Speak gently, she can hear

### Description
In this project, you need to create a C function `append_text_to_file` that appends text at the end of an existing file. The function takes the following parameters:
- `filename`: The name of the file.
- `text_content`: A NULL-terminated string to append to the file.

### Function Prototype
```c
int append_text_to_file(const char *filename, char *text_content);
```

### Return Value
- The function returns 1 on success.
- It returns -1 on failure, which includes cases where the file does not exist or you do not have the required permissions to write to the file.

### Additional Requirements
- Do not create the file if it does not exist.
- If `filename` is NULL, the function returns -1.
- If `text_content` is NULL, it does not add anything to the file.

### Sample Usage
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv) {
    int result;

    if (argc != 3) {
        dprintf(2, "Usage: %s filename text\n", argv[0]);
        exit(1);
    }

    result = append_text_to_file(argv[1], argv[2]);
    printf("-> %i)\n", result);

    return 0;
}
```

## Project 3: cp

### Description
This project involves creating a program in C called `cp` that copies the content of one file to another. The program is used from the command line with the following syntax: `cp file_from file_to`.

### Requirements
- If the number of arguments is incorrect, exit with code 97 and print "Usage: cp file_from file_to" on the POSIX standard error.
- If `file_to` already exists, truncate it.
- If `file_from` does not exist or cannot be read, exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE" on the POSIX standard error.
- If you cannot create or write to `file_to`, exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE" on the POSIX standard error.
- If you cannot close a file descriptor, exit with code 100 and print "Error: Can't close fd FD_VALUE" on the POSIX standard error.

### Usage
```bash
./cp file_from file_to
```

### Sample Usage
```bash
$ ./cp file1.txt file2.txt
```

These projects aim to reinforce your understanding of file I/O operations and error handling in C programming. They involve creating functions and programs that perform various file-related tasks, such as reading, writing, creating, and copying files. This practice is valuable for developing robust C programs that interact with files and handle potential errors gracefully.
