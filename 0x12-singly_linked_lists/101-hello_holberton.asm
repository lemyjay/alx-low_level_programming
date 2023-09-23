section .data
    format db "Hello, Holberton",10,0   ; The format string with newline and null terminator
    fmt_len equ $ - format              ; Calculate the length of the format string

section .text
    global main

    extern printf

main:
    push rbp                            ; Preserve the base pointer
    mov rdi, format                    ; Load the address of the format string into rdi
    call printf                        ; Call the printf function
    pop rbp                             ; Restore the base pointer
    ret                                ; Return from the main function

