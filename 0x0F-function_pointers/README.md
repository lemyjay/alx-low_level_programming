# Project: 0x0F. C - Function Pointers

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `function_pointers.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks

### 0. What's my name

Write a function that prints a name.

Prototype: `void print_name(char *name, void (*f)(char *));`

### 1. If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`

- `size` is the size of the array.
- `action` is a pointer to the function you need to use.

### 2. To hell with circumstances; I create opportunities

Write a function that searches for an integer.

Prototype: `int int_index(int *array, int size, int (*cmp)(int));`

- `size` is the number of elements in the array `array`.
- `cmp` is a pointer to the function to be used to compare values.
- `int_index` returns the index of the first element for which the `cmp` function does not return 0.
- If no element matches, return -1.
- If `size` <= 0, return -1.

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

- You are allowed to use the standard library.
- Usage: `calc num1 operator num2`
- You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to int.
- `operator` is one of the following:
    - `+`: addition
    - `-`: subtraction
    - `*`: multiplication
    - `/`: division
    - `%`: modulo
- The program prints the result of the operation, followed by a new line.
- If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status 98.
- If the operator is none of the above, print `Error`, followed by a new line, and exit with the status 99.
- If the user tries to divide (`/` or `%`) by 0, print `Error`, followed by a new line, and exit with the status 100.

This task requires that you create four different files:

#### 3-calc.h

This file should contain all the function prototypes and data structures used by the program. You can use this structure:

```c
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
