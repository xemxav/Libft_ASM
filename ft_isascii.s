;int	ft_isascii(int c)
;{
;	if (c >= 0 && c <= 127)
;		return (1);
;	return (0);
;}

global _ft_isascii

section .text

_ft_isascii:
	push rbp
	mov rbp, rsp

	cmp rdi, 0
	jl _ft_isascii.no_ascii
	cmp rdi, 127
	jle _ft_isascii.ascii

.no_ascii:
	mov eax, 0
	leave
	ret

.ascii:
	mov eax, 1
	leave
	ret