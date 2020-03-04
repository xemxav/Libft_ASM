;size_t ft_strlen(char *s)

global _ft_strlen

section .text

_ft_strlen:
	push rbp
	mov rbp, rsp

	cld
	xor rax, rax
	xor rcx, rcx
	not rcx
	repne scasb
	not rcx
	mov rax, rcx
	sub rax, 1
	leave
	ret