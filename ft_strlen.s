BITS 64 
global ft_strlen

SECTION .text

ft_strlen:
		mov	rax, rdi

next_char:
		cmp	byte [rax], 0
		je	ret_len
		inc	rax
		jmp	next_char

ret_len:
		sub	rax, rdi
		ret
	
