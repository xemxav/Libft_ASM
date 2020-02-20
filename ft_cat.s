%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
%define READ				3

global _ft_cat

section .bss
	buffer resb 255

section .text



_ft_cat:
	push rbp
	mov rbp, rsp

	push rdi
	test rdi, rdi
	js _ft_cat.exit_fail
	mov rdx, 255
	mov rax, MACH_SYSCALL(READ)
	syscall
	mov rdi, STDOUT
	lea rsi, [rel buffer]
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall

.exit_fail:
	mov rax, 0
	leave
	ret