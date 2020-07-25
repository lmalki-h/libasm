SECTION .text
	global ft_strcpy
	extern	ft_strlen

ft_strcpy:
	;commented lines would prevent segf
	;test	rdi, rdi	;check if rdi == 0
	;jz	strcpy_end	;if 0, ends
	;test	rsi, rsi	;check if rsi == 0
	;jz	strcpy_end 	;if 0, ends	
	call	ft_strlen	;get len of dest (rdi)
	mov	rcx, rax	;set the counter (rcx) to the len of dest
	mov	rax, rdi	;copy the pointer to dest (rdi) in the return register (rax)
	rep	movsb		;copy rsi to rdi until rcx = 0 or rsi = 0
	mov	BYTE [rdi], 0
;strcpy_end:
	ret
