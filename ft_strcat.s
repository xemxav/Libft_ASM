;char *strncat(char *dest, const char *src);

global _ft_strcat

section .text

section .bss
	len dest
	len

_ft_strcat:
	push rbp
	mov rbp, rsp

