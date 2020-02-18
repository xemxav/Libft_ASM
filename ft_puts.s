
%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

global _ft_puts

section .data
	null_str db "(null)"
	len equ $-null_str
	lf db 10

section .text
	extern _ft_strlen

_ft_puts:
	push rbp
	mov rbp, rsp

	cmp rdi, 0
	je _ft_puts.null

	push rdi ; je charge l'adresse sur la stack
	call _ft_strlen
	pop rsi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall

.endline:
	lea rsi, [rel lf]
    mov rdx, 1
    mov rax, MACH_SYSCALL(WRITE)
    syscall
	leave
	ret

.null:
	mov rdi, STDOUT
	lea rsi, [rel null_str]
	mov rdx, len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	jmp _ft_puts.endline

