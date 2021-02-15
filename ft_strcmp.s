;ft_strcmp.s

section .text
    global _ft_strcmp

_ft_strcmp:
    mov r8, 0
    mov rax, 0
    mov rdx, 0

while:
    mov AL, BYTE [rdi + r8]
    mov DL, BYTE [rsi + r8]
    cmp AL, DL
    jne done
    cmp AL, 0
    je done
    inc r8
    jmp while

done:
    sub rax, rdx
    ret
