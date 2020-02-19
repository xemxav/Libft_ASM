
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

	push rdi
	call _ft_strlen
	pop rsi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	test rax, rax
	js _ft_puts.error

.endline:
	lea rsi, [rel lf]
	mov rdx, 1
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	test rax, rax
	js _ft_puts.error
	mov rax, 10
	leave
	ret

.null:
	mov rdi, STDOUT
	lea rsi, [rel null_str]
	mov rdx, len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	test rax, rax
	js _ft_puts.error
	jmp _ft_puts.endline

.error:
	mov rax, -1
	leave
	ret
