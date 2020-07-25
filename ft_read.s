%define READ 0

section .text
	global ft_read
;read(rdi, rsi, rdx)
ft_read:
	test	rsi, rsi
	jz	exit_error
	mov	rax, 0 ;sys_read	
	syscall
	cmp	rax, -9
	je	exit_error
	ret

exit_error:
	mov	rax, -1
	ret

