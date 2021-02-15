;ft_write.s

section	.text
	global	_ft_write
	extern	___error

_ft_write:
	mov	rax, 0x2000004
	syscall
	jc	error
	jmp	done

error:
	push	rax
	call	___error
	pop	rdx
	mov	[rax], rdx
	mov	rax, -1
	jmp	done

done:
	ret
