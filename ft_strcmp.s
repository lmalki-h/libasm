SECTION .text
	global	ft_strcmp

ft_strcmp:
	xor	rax, rax
	xor	rcx, rcx
strcmp_loop:
	mov	al, byte [rdi + rcx]
	mov	dh, byte [rsi + rcx]
	cmp	al, 0
	jz	strcmp_end
	inc	rcx
	cmp	al, dh
	je	strcmp_loop

strcmp_end:
	sub	al, dh ;does not return neg values
	ret		; havent found a solution
