SECTION .text
	global ft_write

ft_write:
	cmp rdx, 0 ;compare nbyte a 0
	jbe exit_error ;si nbyte <= 0 exit
	mov rbx, rdi; 1st arg to rbx
	mov rcx, rsi ; 2nd arg to rcx
	mov rax, 4 ; sys_write 4
	; nbyte already in rdx
		
	cmp rax, 0
	jbe exit_error
	int 80h
	mov rax, rdx
	ret

exit_error:
	;set errno
	mov rax, -1
	ret

