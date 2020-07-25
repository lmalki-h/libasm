SECTION .text
	global ft_strcpy
	extern	ft_strlen

ft_strcpy:
	call	ft_strlen	;get len of dest (rdi)
	mov	rcx, rax	;set the counter (rcx) to the len of dest
	mov	rax, rdi	;copy the pointer to dest (rdi) in the return register (rax)
	rep	movsb		;copy rsi to rdi until rcx = 0 or rsi = 0
	mov	BYTE [rdi], 0
	ret
