section .data
    hello db "Hello, Holberton", 10, 0  ; String with newline and null terminator
    format db "%s", 0                  ; Format specifier for printf, null-terminated

section .text
    extern printf
    global main

main:
    push rbp            ; Save the base pointer
    mov rdi, format     ; Load the format specifier address
    mov rsi, hello      ; Load the address of the string
    call printf         ; Call printf function
    pop rbp             ; Restore the base pointer
    xor rax, rax        ; Set return value to 0 for success
    ret

