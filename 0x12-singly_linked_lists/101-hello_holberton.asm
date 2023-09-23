section .data
	text db "Hello, Holberton", 0xA, 0

section .text
	global main

extern printf

main:
	push rbp
	mov rdi, text
	call printf
	pop rbp
	ret
