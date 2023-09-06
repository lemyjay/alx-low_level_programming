# Project: 0x0B. C - malloc, free

## Learning Objectives

At the end of this project, I am expected to be able to explain to anyone, without the help of Google:

### General

- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when to use malloc
- How to use Valgrind to check for memory leaks

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called main.h
- Don’t forget to push your header file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`; we will use our file. If you do, it won’t be taken into account

## Tasks

### 0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars and initializes it with a specific char.

- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` is `0`
- Returns a pointer to the array, or `NULL` if it fails

### 1. The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype: `char *_strdup(char *str);`
- Returns `NULL` if `str` is `NULL`
- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

### 2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.

- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null-terminated
- If `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure

### 3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2-dimensional array of integers.

- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to `0`
- The function should return `NULL` on failure
- If `width` or `height` is `0` or negative, return `NULL`

### 4. It's not bragging if you can back it up

Write a function that frees a 2-dimensional grid previously created by your `alloc_grid` function.

- Prototype: `void free_grid(int **grid, int height);`
- Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.


