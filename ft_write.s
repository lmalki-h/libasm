%define WRITE 1 ; sys_write code
section .text
	global	ft_write

ft_write:
	test	rsi, rsi
	jz	write_error
	
	mov	rax, WRITE
	syscall
	
	cmp	rax, 0
	jl	write_error
	ret

write_error:
	mov rax, -1
	ret

