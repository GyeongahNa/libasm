section	.text
	global _ft_strlen

_ft_strlen:
	mov	rax, 0
	jmp	while

increase:
	inc	rax
	jmp	while

while:
	cmp	byte [rdi + rax], 0
	jne	increase
	jmp	done

done:
	ret
