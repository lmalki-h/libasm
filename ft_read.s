SECTION	.data
msg	db	"Hey trou de cul", 0h
SECTION .text
	global _start

_start:
	mov rdi, 1
	mov rsi, msg
	mov rdx, 15
	mov rax, 3 ;sys_read
	cmp rdi, 0 ; compare fd a 0
	jbe error_exit
	mov rbx, rdi ;rbx fd
	
	cmp rsi, 0 ; compare buf a 0
	jbe error_exit
	mov rcx, rsi ;rcx buf
	
	cmp rdx, 0
	jbe error_exit
	; rdx = nbytes already
	cmp rax, 0
	jbe error_exit
	mov rax, rdi
	ret

error_exit:
	mov rax, -1
	ret
;returns nbyte
; returns 0 if reached end of file
;returns -1 and set errno if error

