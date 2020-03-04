;void *memcpy(void *dest, const void *src, size_t n);

global _ft_memcpy


section .text

_ft_memcpy:
	push rbp
	mov rbp, rsp

	cld
	mov rax, rdi
	mov rcx, rdx
	rep movsb
	leave
	ret