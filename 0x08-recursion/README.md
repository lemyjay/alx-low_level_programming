# Learning Objectives

At the end of this project, I am expected to be able to explain to anyone, without the help of Google:

## General
- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn't implement recursion

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
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
- You are not allowed to use any kind of loops
- You are not allowed to use static variables


# Tasks

## 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.

- Prototype: `void _puts_recursion(char *s);`

## 1. Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.

- Prototype: `void _print_rev_recursion(char *s);`

## 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.

- Prototype: `int _strlen_recursion(char *s);`

## 3. You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.

- Prototype: `int factorial(int n);`
- If n is lower than 0, the function should return -1
- Factorial of 0 is 1

## 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of x raised to the power of y.

- Prototype: `int _pow_recursion(int x, int y);`
- If y is lower than 0, the function should return -1

## 5. Your subconscious is looking for the dreamer
Write a function that returns the natural square root of a number.

- Prototype: `int _sqrt_recursion(int n);`
- If n does not have a natural square root, the function should return -1

## 6. Inception. Is it possible?
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

- Prototype: `int is_prime_number(int n);`

