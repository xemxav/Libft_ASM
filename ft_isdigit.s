;int	ft_isdigit(int c)
;{
;	if (c >= '0' && c <= '9')
;		return (1);
;	return (0);
;}

global _ft_isdigit

section .text

_ft_isdigit:
	push rbp
	mov rbp, rsp

	cmp rdi, '0'
	jl _ft_isdigit.no_digit
	cmp rdi, '9'
	jle _ft_isdigit.digit

.no_digit:
	mov eax, 0
	leave
	ret

.digit:
	mov eax, 1
	leave
	ret