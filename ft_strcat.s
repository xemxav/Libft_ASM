;char *strcat(char *dest, const char *src);

global _ft_strcat
extern _ft_strlen

section .text


_ft_strcat:
	push rbp
	mov rbp, rsp

	push rdi
	call _ft_strlen
	add rdi, rax
.loop:
	cmp byte [rsi], 0
	je _ft_strcat.exit
	mov rdx, 0
	mov byte rdx, [rsi]
	mov [rdi], rdx
	inc rdi
	inc rsi
	jmp _ft_strcat.loop

.exit:
	mov byte [rdi], 0
	pop rax
	leave
	ret