SECTION .text
	global	ft_strcmp

ft_strcmp:
	xor	rax, rax
	xor	rcx, rcx

cmp_next_char:
	mov	al, byte [rdi + rcx]
	mov	dl, byte [rsi + rcx]
	cmp	al, 0
	jz	end_cmp
	inc	rcx
	cmp	al, dl
	je	cmp_next_char

end_cmp:
	sub	al, dl ;does not return neg values
	ret		; havent found a solution
