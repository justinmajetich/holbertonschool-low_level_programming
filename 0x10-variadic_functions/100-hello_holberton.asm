global _start

%define sys_write 1
%define sys_exit 60

section	.data
	hello	db	"Hello, Holberton", 10
	len	equ	$-hello

section	.text

_start:
	mov rax, sys_write
	mov rdi, 1
	mov rsi, hello
	mov rdx, len
	syscall

	mov rax, sys_exit
	mov rdi, 0
	syscall
