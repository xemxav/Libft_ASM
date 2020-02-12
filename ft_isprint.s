; int ft_isprint(int c)
;{
;	if (c >= 32 && c <= 126)
;		return (1);
;	return (0);
;}

global _ft_isprint

section .text

_ft_isprint:
	push rbp
	mov rbp, rsp

	cmp rdi, 32
	jl _ft_isprint.no_print
	cmp rdi, 126
	jle _ft_isprint.print

.no_print:
	mov eax, 0
	leave
	ret

.print:
	mov eax, 1
	leave
	ret