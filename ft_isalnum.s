global _ft_isalnum

section .text

_ft_isalnum:
	push rbp
	mov rbp, rsp

	cmp rdi, '0'
	jl _ft_isalnum.no_alnum
	cmp rdi, '9'
	jle _ft_isalnum.alnum
	cmp rdi, 65
	jl _ft_isalnum.no_alnum
	cmp rdi, 90
	jle _ft_isalnum.alnum
	cmp rdi, 97
	jl _ft_isalnum.no_alnum
	cmp rdi, 122
	jle _ft_isalnum.alnum

.no_alnum:
	mov eax, 0
	leave
	ret

.alnum:
	mov eax, 1
	leave
	ret