
global _ft_memset

section .text

_ft_memset:
	push rbp
	mov rbp, rsp

	mov rcx, 0
	mov rax, rdi
.loop:
	cmp rcx, rdx
	jz _ft_memset.exit
	mov [rdi + rcx], rsi
	inc rcx
	jmp _ft_memset.loop

.exit:
	leave
	ret