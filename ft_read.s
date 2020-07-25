%define READ 0 ; sys_read code

section .text
	global ft_read
ft_read:
	test	rsi, rsi
	jz	read_error
	
	mov	rax, READ
	syscall
	
	cmp	rax, 0
	jl	read_error
	ret

read_error:
	mov	rax, -1
	ret

