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
	js _ft_cat.exit_fail
	push rdi
.read:
	pop rdi
	lea rsi, [rel buffer]
	mov rdx, 255
	mov rax, MACH_SYSCALL(READ)
	syscall
	jc _ft_cat.exit
	cmp rax, 0
	jle _ft_cat.exit_fail
	push rdi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	test rax, rax
	jz _ft_cat.exit_fail
	jmp _ft_cat.read

.exit:
	mov rax, 1
	leave
	ret

.exit_fail:
	mov rax, 0
	leave
	ret