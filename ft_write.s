%define WRITE 1 ; sys_write code
section .text
	global	ft_write
	extern __errno_location

ft_write:
	mov	rax, WRITE
	syscall
	cmp	rax, 0
	jl	write_error
	ret

write_error:
	neg rax
	mov r8, rax
	call __errno_location
	mov [rax], r8
	mov rax, -1
	ret
