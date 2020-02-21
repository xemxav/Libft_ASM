%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
%define READ				3

global _ft_cat

section .bss
	buffer resb 255

section .text
	extern read

_ft_cat:
	push rbp
	mov rbp, rsp

	test rdi, rdi
	js _ft_cat.exit
	mov r10, rdi
.read:
	mov rdi, r10
	lea rsi, [rel buffer]
	mov rdx, 255
	mov rax, MACH_SYSCALL(READ)
	syscall
	jc _ft_cat.exit
	cmp rax, 0
	jle _ft_cat.exit
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jmp _ft_cat.read

.exit:
	mov rax, 0
	leave
	ret