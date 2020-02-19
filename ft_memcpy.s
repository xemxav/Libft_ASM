;void *memcpy(void *dest, const void *src, size_t n);

global _ft_memcpy


section .text

_ft_memcpy:
	push rbp
	mov rbp, rsp

	push rdi
	mov rcx, 0
.loop:
	cmp rcx, rdx
	jz _ft_memcpy.exit
	mov r10, [rsi+rcx]
	mov [rdi+rcx], r10
	inc rcx
	jmp _ft_memcpy.loop
.exit:
	pop rax
	leave
	ret