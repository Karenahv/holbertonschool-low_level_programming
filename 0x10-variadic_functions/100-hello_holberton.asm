section .data
	    msg db "Hello, holberton",10 ; 10 is the ASCII code for a new line (LF)

	section .text
	    global _start

_start:
	    mov rax, 1
	    mov rdi, 1
	    mov rsi, msg
	    mov rdx, 17
	    syscall

	    mov rax, 60
	    mov rdi, 0
	    syscall
