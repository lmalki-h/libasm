SECTION .text
global	ft_write
%define WRITE 1

ft_write:
	test	rsi, rsi
	jz	end_error
	cmp	rdi, 0
	jb	end_error
	;check if fd < 0
	mov	rax, WRITE; sys call 4
	syscall
	cmp	rax, -9
	je	end_error
	mov	rax, rdx
	ret
end_error:
	mov rax, -1
	ret

