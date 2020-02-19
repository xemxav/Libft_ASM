
global _ft_bzero
extern _ft_memset

section .text

_ft_bzero:
	push rbp
	mov rbp, rsp

	push rsi
	mov rsi, 0
	pop rdx
	call _ft_memset
	mov rax, 0
	leave
	ret