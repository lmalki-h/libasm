%define READ 0 ; sys_read code

section .text
	global ft_read
	extern __errno_location

ft_read:
	mov	rax, READ
	syscall

	cmp	rax, 0
	jl	read_error
	ret

read_error:
	neg rax
	mov r8, rax
	call __errno_location ;met dans rax l'address la variable errno
 	mov [rax], r8
	mov	rax, -1
	ret
