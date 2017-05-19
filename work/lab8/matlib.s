	global product
	section .text
product:
	xor	rax, rax	; zero out return register
	xor	r10, r10	; zero out the counter i
start:
	cmp	r10, rsi
	je	done
	add	rax, rdi
	inc	r10
	jmp	start
done:
	ret

	global power
	section .text
power:
	cmp 	rsi, 1
	jne	recurse
	mov	rax, rdi
	ret
recurse:
	push	rdi
	push	rsi
	dec	rsi
	call	power
	mov	rsi, rax
	call	product
	pop	rsi
	pop 	rdi
	ret
