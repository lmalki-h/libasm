SECTION	.text
	global	ft_strdup
	extern	ft_strlen
	extern	ft_strcpy
	extern	malloc

ft_strdup:
	mov	rsi, rdi
	push	rsi
	call	ft_strlen
	mov	rdi, rax
	inc	rdi
	call	malloc wrt ..plt
	cmp	rax, 0
	jz	malloc_error
	mov	rdi, rax
	pop	rsi
	call	ft_strcpy
	ret
malloc_error:
	xor	rax, rax
	ret
