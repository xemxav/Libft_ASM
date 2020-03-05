;char *strcat(char *dest, const char *src);

global _ft_strcat
extern _ft_strlen

section .text


_ft_strcat:
	push rbp
	mov rbp, rsp

	push rdi
.inc_dest:
	cmp byte [rdi], 0
	jz _ft_strcat.writing
	inc rdi
	jmp _ft_strcat.inc_dest
.writing:
	cmp byte [rsi], 0
	jz _ft_strcat.end
	mov rdx,  [rsi]
	mov  [rdi], rdx
	inc rdi
	inc rsi
	jmp _ft_strcat.writing

.end:
	mov byte [rdi], 0
	pop rax
	leave
	ret