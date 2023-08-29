# Learning Objectives

At the end of this project, I am expected to be able to explain to anyone, without the help of Google:

## General
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

## Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks yourself to meet the above learning objectives.
- You will not be able to meet the objectives by copying and pasting someone else’s work.
- Plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should follow the Betty style. Use `betty-style.pl` and `betty-doc.pl` for checks
- No global variables allowed
- Maximum of 5 functions per file
- No standard library functions allowed except `_putchar`
- Prototypes of all functions and `_putchar` should be included in `main.h`

### Quiz Questions
- Quiz questions are designed to test your understanding of the learning objectives
- You can use the provided `main.c` files to test your functions, but don't need to push them to your repo

# Tasks

## 0. memset
Write a function that fills memory with a constant byte.

- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first n bytes of the memory area pointed to by s with the constant byte b
- Returns a pointer to the memory area s

## 1. memcpy
Write a function that copies memory area.

- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- The `_memcpy()` function copies n bytes from memory area src to memory area dest
- Returns a pointer to dest

## 2. strchr
Write a function that locates a character in a string.

- Prototype: `char *_strchr(char *s, char c);`
- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

## 3. strspn
Write a function that gets the length of a prefix substring.

- Prototype: `unsigned int _strspn(char *s, char *accept);`
- Returns the number of bytes in the initial segment of s which consist only of bytes from accept

## 4. strpbrk
Write a function that searches a string for any of a set of bytes.

- Prototype: `char *_strpbrk(char *s, char *accept);`
- The `_strpbrk()` function locates the first occurrence in the string s of any of the bytes in the string accept
- Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

## 5. strstr
Write a function that locates a substring.

- Prototype: `char *_strstr(char *haystack, char *needle);`
- The `_strstr()` function finds the first occurrence of the substring needle in the string haystack
- Returns a pointer to the beginning of the located substring, or NULL if the substring is not found

## 6. Chess is mental torture
Write a function that prints the chessboard.

- Prototype: `void print_chessboard(char (*a)[8]);`

## 7. The line of life is a ragged diagonal between duty and desire
Write a function that prints the sum of the two diagonals of a square matrix of integers.

- Prototype: `void print_diagsums(int *a, int size);`

