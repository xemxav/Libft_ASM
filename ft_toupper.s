
global _ft_toupper

section .text

_ft_toupper:
	push rbp
	mov rbp, rsp

	mov rax, rdi
	cmp rax, 97
	jl _ft_toupper.finish
	cmp rax, 122
	ja _ft_toupper.finish
	sub rax,32

.finish:
	leave
	ret