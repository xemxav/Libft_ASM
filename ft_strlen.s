
global _ft_strlen

section .text

_ft_strlen:
	push rbp
	mov rbp, rsp

	mov rax, rdi
	mov rbx, rax
.counting:
	cmp byte [rax], 0
	je _ft_strlen.finished
	inc rax
	jmp _ft_strlen.counting

.finished:
	sub rax, rbx
	leave
	ret