# Learning Objectives

I am expected to have gained the ability to explain the following concepts to others without relying on external resources upon completion of this project:

## General
- Understand nested loops and their application.
- Comprehend the concept of functions and their utilization.
- Differentiate between function declaration and definition.
- Define and explain prototypes.
- Grasp the scope of variables.
- Familiarize yourself with GCC flags like `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, and `-std=gnu89`.
- Understand the purpose of header files and their usage with `#include`.

## Requirements
### General
- Choose from editors such as `vi`, `vim`, or `emacs`.
- Compile your code on Ubuntu 20.04 LTS using the `gcc` compiler with flags `-Wall`, `-Werror`, `-Wextra`, `-pedantic`, and `-std=gnu89`.
- Ensure that all your code files end with a newline.
- Mandatory: Include a `README.md` file at the root of your project folder.
- Follow the Betty style guidelines when writing your code. It will be evaluated using `betty-style.pl` and `betty-doc.pl`.
- Avoid using global variables.
- Limit each file to a maximum of 5 functions.
- You are not allowed to use standard library functions like `printf`, `puts`, etc. However, you are allowed to use `_putchar`.
- Do not include `_putchar.c` in your submission; the file will be provided.
- Prototypes for all your functions and the `_putchar` function should be present in a header file named `main.h`. Don't forget to submit the header file as well.

## Copyright - Plagiarism
- The tasks in this project require you to generate solutions on your own to fulfill the learning objectives.
- Copying and pasting someone else's work will not enable you to achieve the project's objectives.
- Publishing any part of this project's content is not permitted.
- Plagiarism will lead to removal from the program.


## Tasks

### Task 0: \_putchar
Wrote a program that prints the string "\_putchar", followed by a newline.

### Task 1: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Implemented a function `void print_alphabet(void)` that prints the lowercase alphabet followed by a newline. You can use `_putchar` only twice in your code.

### Task 2: 10 x alphabet
Created a function `void print_alphabet_x10(void)` that prints the lowercase alphabet 10 times, each followed by a newline. You can use `_putchar` only twice in your code.

### Task 3: islower
Wrote a function `int _islower(int c)` that checks if a character is lowercase. It returns 1 if `c` is lowercase and 0 otherwise.

### Task 4: isalpha
Implemented a function `int _isalpha(int c)` that checks if a character is an alphabetic letter. It returns 1 if `c` is a letter (uppercase or lowercase) and 0 otherwise.

### Task 5: Sign
Created a function `int print_sign(int n)` that prints the sign of a number. It returns 1 if `n` is positive, 0 if `n` is zero, and -1 if `n` is negative.

### Task 6: There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Wrote a function `int _abs(int)` that computes the absolute value of an integer.

### Task 7: There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Implemented a function `int print_last_digit(int)` that prints the last digit of a number. It returns the value of the last digit.

### Task 8: I'm federal agent Jack Bauer, and today is the longest day of my life
Created a function `void jack_bauer(void)` that prints every minute of a day (00:00 to 23:59), separated by newlines.

### Task 9: Learn your times table
Wrote a function `void times_table(void)` that prints the 9 times table starting from 0, formatted in a specific way.

### Task 10: a + b
Implemented a function `int add(int, int)` that adds two integers and returns the result.

### Task 11: 98 Battery Street, the OG
Created a function `void print_to_98(int n)` that prints all natural numbers from `n` to 98, separated by commas and spaces.

