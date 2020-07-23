SECTION .text
global ft_exit

ft_exit:
	mov rbx, 0
	mov rax, 1
	int 80h
	ret
