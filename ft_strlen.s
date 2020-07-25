section .text
	global ft_strlen

ft_strlen:
	xor rax, rax ;clear rax register and al = 0

next_char:
	xor rcx, rcx ; clear rcx 
	dec rcx ; rcx = -1 (0xFFFFFFFFFFFFF)
	repne scasb ;compare every byte from rdi to al until =
	sub rax, rcx ; = 0 - nb of scanned byte + 1
	sub rax, 2 ; -1 for the terminating 0 - 1

end_ft_strlen:
	ret
