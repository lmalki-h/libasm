SECTION .text
	global ft_strcmp

ft_strcmp:
	;DS data segment register
	mov ds, rdi
	mov es, rsi
	mov cx, 100
	;ES extra segment register
	;SI source index
	;DI destination index	
	repe cmpsb
	mov rax, rdi
	sub rax, rsi
	ret
