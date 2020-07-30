SECTION .text
	global ft_strcpy

ft_strcpy:
	xor	dl,dl
	mov	rax, rdi

loop:
	cmp	byte[rsi], 0
	jz	finish
	mov	dl, byte [rsi]
	mov	byte [rdi], dl
	inc	rdi
	inc	rsi
	jmp	loop

finish:
	mov	dl, byte [rsi]
	mov	byte [rdi], dl
	ret
