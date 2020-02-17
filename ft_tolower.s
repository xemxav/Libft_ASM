
global _ft_tolower

section .text

_ft_tolower:
	push rbp
	mov rbp, rsp

	mov rax, rdi
	cmp rax, 65
	jb _ft_tolower.finish
	cmp rax, 90
	ja _ft_tolower.finish
	add rax,32

.finish:
	leave
	ret