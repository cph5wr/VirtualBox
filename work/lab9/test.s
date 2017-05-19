	.text
	.intel_syntax noprefix
	.file	"test.cpp"
	.section	.rodata.cst16,"aM",@progbits,16
	.align	16
.LCPI0_0:
	.long	1                       # 0x1
	.long	1                       # 0x1
	.long	1                       # 0x1
	.long	1                       # 0x1
.LCPI0_1:
	.long	0                       # 0x0
	.long	4294967295              # 0xffffffff
	.long	4294967294              # 0xfffffffe
	.long	4294967293              # 0xfffffffd
.LCPI0_2:
	.long	4294967292              # 0xfffffffc
	.long	4294967291              # 0xfffffffb
	.long	4294967290              # 0xfffffffa
	.long	4294967289              # 0xfffffff9
	.text
	.globl	_Z4facti
	.align	16, 0x90
	.type	_Z4facti,@function
_Z4facti:                               # @_Z4facti
	.cfi_startproc
# BB#0:
	mov	eax, 1
	cmp	edi, 1
	je	.LBB0_12
# BB#1:                                 # %tailrecurse.preheader
	lea	ecx, [rdi - 1]
	mov	eax, 1
	cmp	ecx, 8
	jb	.LBB0_11
# BB#2:                                 # %min.iters.checked
	mov	r8d, ecx
	and	r8d, -8
	mov	r9d, ecx
	and	r9d, -8
	je	.LBB0_11
# BB#3:                                 # %vector.body.preheader
	lea	edx, [rdi - 9]
	mov	eax, edx
	shr	eax, 3
	bt	edx, 3
	jb	.LBB0_4
# BB#5:                                 # %vector.body.prol
	movd	xmm0, edi
	pshufd	xmm1, xmm0, 0           # xmm1 = xmm0[0,0,0,0]
	movdqa	xmm0, xmmword ptr [rip + .LCPI0_1] # xmm0 = [0,4294967295,4294967294,4294967293]
	paddd	xmm0, xmm1
	paddd	xmm1, xmmword ptr [rip + .LCPI0_2]
	mov	esi, 8
	jmp	.LBB0_6
.LBB0_4:
	movdqa	xmm0, xmmword ptr [rip + .LCPI0_0] # xmm0 = [1,1,1,1]
	xor	esi, esi
	movdqa	xmm1, xmm0
.LBB0_6:                                # %vector.body.preheader.split
	test	eax, eax
	je	.LBB0_9
# BB#7:                                 # %vector.body.preheader.split.split
	mov	eax, r9d
	sub	eax, esi
	mov	edx, edi
	sub	edx, esi
	movdqa	xmm2, xmmword ptr [rip + .LCPI0_1] # xmm2 = [0,4294967295,4294967294,4294967293]
	movdqa	xmm3, xmmword ptr [rip + .LCPI0_2] # xmm3 = [4294967292,4294967291,4294967290,4294967289]
	.align	16, 0x90
.LBB0_8:                                # %vector.body
                                        # =>This Inner Loop Header: Depth=1
	movd	xmm4, edx
	pshufd	xmm4, xmm4, 0           # xmm4 = xmm4[0,0,0,0]
	movdqa	xmm5, xmm4
	paddd	xmm5, xmm2
	paddd	xmm4, xmm3
	pshufd	xmm6, xmm5, 245         # xmm6 = xmm5[1,1,3,3]
	pmuludq	xmm5, xmm0
	pshufd	xmm5, xmm5, 232         # xmm5 = xmm5[0,2,2,3]
	pshufd	xmm0, xmm0, 245         # xmm0 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm6
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	punpckldq	xmm5, xmm0      # xmm5 = xmm5[0],xmm0[0],xmm5[1],xmm0[1]
	pshufd	xmm0, xmm4, 245         # xmm0 = xmm4[1,1,3,3]
	pmuludq	xmm4, xmm1
	pshufd	xmm4, xmm4, 232         # xmm4 = xmm4[0,2,2,3]
	pshufd	xmm1, xmm1, 245         # xmm1 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm0
	pshufd	xmm0, xmm1, 232         # xmm0 = xmm1[0,2,2,3]
	punpckldq	xmm4, xmm0      # xmm4 = xmm4[0],xmm0[0],xmm4[1],xmm0[1]
	lea	esi, [rdx - 8]
	movd	xmm0, esi
	pshufd	xmm1, xmm0, 0           # xmm1 = xmm0[0,0,0,0]
	movdqa	xmm0, xmm1
	paddd	xmm0, xmm2
	paddd	xmm1, xmm3
	pshufd	xmm6, xmm0, 245         # xmm6 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm5
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	pshufd	xmm5, xmm5, 245         # xmm5 = xmm5[1,1,3,3]
	pmuludq	xmm5, xmm6
	pshufd	xmm5, xmm5, 232         # xmm5 = xmm5[0,2,2,3]
	punpckldq	xmm0, xmm5      # xmm0 = xmm0[0],xmm5[0],xmm0[1],xmm5[1]
	pshufd	xmm5, xmm1, 245         # xmm5 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm4
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm4, xmm4, 245         # xmm4 = xmm4[1,1,3,3]
	pmuludq	xmm4, xmm5
	pshufd	xmm4, xmm4, 232         # xmm4 = xmm4[0,2,2,3]
	punpckldq	xmm1, xmm4      # xmm1 = xmm1[0],xmm4[0],xmm1[1],xmm4[1]
	add	edx, -16
	add	eax, -16
	jne	.LBB0_8
.LBB0_9:                                # %middle.block
	pshufd	xmm2, xmm1, 245         # xmm2 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm0
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm0, xmm0, 245         # xmm0 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm2
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	punpckldq	xmm1, xmm0      # xmm1 = xmm1[0],xmm0[0],xmm1[1],xmm0[1]
	pshufd	xmm0, xmm1, 78          # xmm0 = xmm1[2,3,0,1]
	pshufd	xmm2, xmm1, 245         # xmm2 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm0
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm0, xmm0, 245         # xmm0 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm2
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	punpckldq	xmm1, xmm0      # xmm1 = xmm1[0],xmm0[0],xmm1[1],xmm0[1]
	pshufd	xmm0, xmm1, 229         # xmm0 = xmm1[1,1,2,3]
	pshufd	xmm2, xmm1, 245         # xmm2 = xmm1[1,1,3,3]
	pmuludq	xmm1, xmm0
	pshufd	xmm1, xmm1, 232         # xmm1 = xmm1[0,2,2,3]
	pshufd	xmm0, xmm0, 245         # xmm0 = xmm0[1,1,3,3]
	pmuludq	xmm0, xmm2
	pshufd	xmm0, xmm0, 232         # xmm0 = xmm0[0,2,2,3]
	punpckldq	xmm1, xmm0      # xmm1 = xmm1[0],xmm0[0],xmm1[1],xmm0[1]
	movd	eax, xmm1
	cmp	ecx, r9d
	je	.LBB0_12
# BB#10:
	sub	edi, r8d
	.align	16, 0x90
.LBB0_11:                               # %tailrecurse
                                        # =>This Inner Loop Header: Depth=1
	imul	eax, edi
	lea	ecx, [rdi - 1]
	cmp	ecx, 1
	mov	edi, ecx
	jne	.LBB0_11
.LBB0_12:                               # %tailrecurse._crit_edge
	ret
.Lfunc_end0:
	.size	_Z4facti, .Lfunc_end0-_Z4facti
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	xor	eax, eax
	ret
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc

	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	_GLOBAL__sub_I_test.cpp,@function
_GLOBAL__sub_I_test.cpp:                # @_GLOBAL__sub_I_test.cpp
	.cfi_startproc
# BB#0:
	push	rax
.Ltmp0:
	.cfi_def_cfa_offset 16
	mov	edi, _ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	edi, _ZNSt8ios_base4InitD1Ev
	mov	esi, _ZStL8__ioinit
	mov	edx, __dso_handle
	pop	rax
	jmp	__cxa_atexit            # TAILCALL
.Lfunc_end2:
	.size	_GLOBAL__sub_I_test.cpp, .Lfunc_end2-_GLOBAL__sub_I_test.cpp
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_test.cpp

	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
