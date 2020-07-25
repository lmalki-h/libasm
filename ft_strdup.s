SECTION .text
	global ft_strdup

ft_strdup:
	
	call ft_strlen
	push	rdi
	mov	rcx, rax
	mov	rdi, rax
	call	malloc
	mov	rsi, rax
	pop	
	rep	movsb
strdup_end:
	ret
