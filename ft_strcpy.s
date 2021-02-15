;ft_strcpy.s

section .text
    global _ft_strcpy

_ft_strcpy:
    mov	r8, 0
    mov	rax, 0
    jmp	while

copy:
    mov AL, BYTE [rsi + r8]
    mov BYTE[rdi + r8], AL
    inc r8
    jmp while

while:
    cmp BYTE [rsi + r8], 0
    jne copy
    jmp done

done:
    mov BYTE [rdi + r8], 0
    mov rax, rdi
    ret
