SECTION .text
	global	ft_strdup
	extern	ft_strlen
	extern	malloc
	extern	ft_strcpy
ft_strdup:
	push	rdi
	call	ft_strlen	;gets len of src
	mov	rcx, rax	;copy len to counter
	inc	rax		; +1 for \0
	
	mov	rdi, rax	;copy len to 1st arg pos
	call	malloc		;malloc of len (rdi)
	cmp	rax, 0		;check malloc ok
	jz	strdup_end	;if not ok, return
	pop	rdi
	mov	rsi, rdi	;copy src to 2nd arg pos
	mov	rdi, rax	;copy pointer to memory allocated to 1st arg pos
	rep	movsb		;move
	mov	BYTE [rdi], 0	;
	ret

strdup_end:
	xor	rax,rax
	ret
	
