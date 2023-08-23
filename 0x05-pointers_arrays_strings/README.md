# Pointers, Arrays, and Strings

This project aims to enhance the understanding of pointers, arrays, and strings in C programming. By completing the tasks, you'll gain proficiency in using these fundamental concepts effectively. The project also emphasizes learning without relying on external sources like Google.

## Learning Objectives

After completing this project, you should be able to explain the following concepts without external assistance:

### General
- Pointers and their usage.
- Arrays and their manipulation.
- Differences between pointers and arrays.
- String manipulation and operations.
- Variable scope and its impact.

## Copyright - Plagiarism

To meet the learning objectives, you are required to develop your solutions for the tasks below. Copy-pasting or plagiarism is strictly prohibited. Avoid publishing any content related to this project. Any form of plagiarism will lead to removal from the program.

## Requirements

### General
- Editors: vi, vim, emacs.
- Compilation on Ubuntu 20.04 LTS using `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Files must end with a newline character.
- A `README.md` file at the project's root is mandatory.
- Code must follow the Betty style guidelines.
- No use of global variables.
- Maximum of 5 functions per file.
- Restricted use of standard library functions.
- `_putchar` can be used.
- Prototypes for functions, including `_putchar`, must be in `main.h`.
- Pushing the `_putchar.c` file is unnecessary as it will not be considered.
- Do not push example `main.c` files provided for testing purposes.

## Quiz questions

Great! You've completed the quiz successfully! Keep going!

## Tasks

### Task 0: 98 Battery st.

Write a function that takes a pointer to an int as a parameter and updates the value it points to 98.

Prototype: `void reset_to_98(int *n);`

### Task 1: Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

Prototype: `void swap_int(int *a, int *b);`

### Task 2: This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

Prototype: `int _strlen(char *s);`

### Task 3: I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to stdout.

Prototype: `void _puts(char *str);`

### Task 4: I can only go one way. I've not got a reverse gear

Write a function that prints a string, in reverse, followed by a new line.

Prototype: `void print_rev(char *s);`

### Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string.

Prototype: `void rev_string(char *s);`

### Task 6: Half the lies they tell about me aren't true

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: `void puts2(char *str);`

### Task 7: Winning is only half of it. Having fun is the other half

Write a function that prints half of a string, followed by a new line.

Prototype: `void puts_half(char *str);`

### Task 8: Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: `void print_array(int *a, int n);`

### Task 9: strcpy

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Prototype: `char *_strcpy(char *dest, char *src);`
