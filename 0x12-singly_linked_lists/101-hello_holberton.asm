section .data
	text db "Hello, Holberton", 10, 0

section .text
	global main

extern printf

main:
	push rbp
	mov rdi, text
	call printf
	pop rbp
	ret
