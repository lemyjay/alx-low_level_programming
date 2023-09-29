# Bit Manipulation and Endianness Project

## Learning Objectives

At the end of this project, I am expected to be able to explain to anyone, without the help of Google:

### General

- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

## Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do, it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded

### Tasks

### 0. Binary to Unsigned Int

Write a function that converts a binary number to an unsigned int.

- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 or if b is NULL.

Example usage:

```c
unsigned int n;

n = binary_to_uint("1");
```

### 1. Print Binary (mandatory)
Write a function that prints the binary representation of a number.

- **Prototype:** `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use malloc
- You are not allowed to use the % or / operators

Example usage:

```c
print_binary(1024);
```

### 2. Get Bit (mandatory)
Write a function that returns the value of a bit at a given index.

- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
- Returns: the value of the bit at index index or -1 if an error occurred

Example usage:

```c
int n = get_bit(1024, 10);
```

### 3. Set Bit (mandatory)
Write a function that sets the value of a bit to 1 at a given index.

- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
- Returns: 1 if it worked, or -1 if an error occurred

Example usage:

```c
unsigned long int n = 1024;
set_bit(&n, 5);
```

### 4. Clear Bit (mandatory)
Write a function that sets the value of a bit to 0 at a given index.

- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
- Returns: 1 if it worked, or -1 if an error occurred

Example usage:

```c
unsigned long int n = 1024;
clear_bit(&n, 10);
```

### 5. Flip Bits (mandatory)
Write a function that returns the number of bits you would need to flip to get from one number to another.

- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the % or / operators

Example usage:

```c
unsigned int n = flip_bits(1024, 1);
```

### 6. Endianness (advanced)
Write a function that checks the endianness.

- **Prototype:** `int get_endianness(void);`
- Returns: 0 if big endian, 1 if little endian

Example usage:

```c
int n = get_endianness();
```

### 7. Crackme3 (advanced)
Find the password for this program.

- Save the password in the file 101-password
- Your file should contain the exact password, no new line, no extra space

Example usage:

```bash
./crackme3 `cat 101-password`
```
