;int	ft_isdigit(int c)
;{
;	if (c >= '0' && c <= '9')
;		return (1);
;	return (0);
;}

global _ft_isalpha

section .text

_ft_isalpha
	push rbp
	mov rbp, rsp

	cmp rdi, 65
	jl _ft_isalpha.no_alpha
	cmp rdi, 90
	jle _ft_isalpha.alpha
	cmp rdi, 97
	jl _ft_isalpha.no_alpha
	cmp rdi, 122
	jle _ft_isalpha.alpha

.no_alpha:
	mov eax, 0
	leave
	ret

.alpha:
	mov eax, 1
	leave
	ret