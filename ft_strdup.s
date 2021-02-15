;ft_strdup.s

section	.text
    global _ft_strdup
    extern _ft_strlen
    extern _malloc
    extern ___error
    extern _ft_strcpy

_ft_strdup:
    push rdi

length:
    call _ft_strlen
    add rax, 1
    jmp malloc

malloc:
    mov rdi, rax
    call _malloc
    cmp rax, 0
    je error
    jmp copy

error:
    push rax
    call ___error
    pop rdx
    mov [rax], rdx
    mov rax, -1
    jmp done

copy:
    mov rdi, rax
    pop rsi
    call _ft_strcpy
    jmp done

done:
    ret
