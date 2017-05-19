	;; Colin Harfst
	;; cph5wr
	;; lab section 103
	;; 14 November 2016

	global threexplusone
	section .text
	
threexplusone:
	xor	rax, rax
	
start:
	mov	r10, rdi	; if rdi is congruent to 1, jump to odd
	and	r10, 1
	cmp	r10, 0		; optimization! not altering rdi
	je	even
	jmp	odd

even:	
	sar	rdi, 1		; optimization! bit shift division
	cmp	rdi, 1
	je	done
	call	start
	inc	rax
	ret			; return 1+f(x/2)
	
odd:	
	imul	rdi, 3
	inc	rdi		; optimization! not using memory (considered using lea here, but it wasn't making a difference in my times)
	call	start
	inc	rax
	ret			; return 1+f(3x+1)

done:
	mov	rax, 1
	ret			; return f(1)=1
