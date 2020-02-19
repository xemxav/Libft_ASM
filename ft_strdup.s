;char *strdup(const char *s);
global _ft_strdup

extern _ft_strlen
extern _ft_memcpy
extern _malloc

section .text

_ft_strdup:
	push rbp
	mov rbp, rsp

	push rdi
	call _ft_strlen
	push rax
	mov rdi, rax
	call _malloc
	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy
	leave
	ret
