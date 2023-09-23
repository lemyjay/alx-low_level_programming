section .data
    hello db "Hello, Holberton",10,0  ; Define the string with a newline character and null terminator

section .text
    global main

extern printf

main:
    push rbp           ; Save the base pointer
    mov rdi, hello     ; Load the address of the string into rdi (1st argument for printf)
    call printf        ; Call the printf function to print the string
    pop rbp            ; Restore the base pointer
    ret               ; Return from the main function

