	.text
	.intel_syntax noprefix
	.file	"newmain.cpp"
	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	__cxx_global_var_init,@function
__cxx_global_var_init:                  # @__cxx_global_var_init
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp0:
	.cfi_def_cfa_offset 16
.Ltmp1:
	.cfi_offset rbp, -16
	mov	rbp, rsp
.Ltmp2:
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	movabs	rdi, _ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	movabs	rdi, _ZNSt8ios_base4InitD1Ev
	movabs	rsi, _ZStL8__ioinit
	movabs	rdx, __dso_handle
	call	__cxa_atexit
	mov	dword ptr [rbp - 4], eax # 4-byte Spill
	add	rsp, 16
	pop	rbp
	ret
.Lfunc_end0:
	.size	__cxx_global_var_init, .Lfunc_end0-__cxx_global_var_init
	.cfi_endproc

	.text
	.globl	_ZN3ObjC2Eib
	.align	16, 0x90
	.type	_ZN3ObjC2Eib,@function
_ZN3ObjC2Eib:                           # @_ZN3ObjC2Eib
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp3:
	.cfi_def_cfa_offset 16
.Ltmp4:
	.cfi_offset rbp, -16
	mov	rbp, rsp
.Ltmp5:
	.cfi_def_cfa_register rbp
	mov	al, dl
	mov	qword ptr [rbp - 8], rdi
	mov	dword ptr [rbp - 12], esi
	and	al, 1
	mov	byte ptr [rbp - 13], al
	mov	rdi, qword ptr [rbp - 8]
	mov	edx, dword ptr [rbp - 12]
	mov	dword ptr [rdi], edx
	mov	al, byte ptr [rbp - 13]
	and	al, 1
	mov	byte ptr [rdi + 4], al
	pop	rbp
	ret
.Lfunc_end1:
	.size	_ZN3ObjC2Eib, .Lfunc_end1-_ZN3ObjC2Eib
	.cfi_endproc

	.globl	_ZN3Obj4getXEv
	.align	16, 0x90
	.type	_ZN3Obj4getXEv,@function
_ZN3Obj4getXEv:                         # @_ZN3Obj4getXEv
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp6:
	.cfi_def_cfa_offset 16
.Ltmp7:
	.cfi_offset rbp, -16
	mov	rbp, rsp
.Ltmp8:
	.cfi_def_cfa_register rbp
	mov	qword ptr [rbp - 8], rdi
	mov	rdi, qword ptr [rbp - 8]
	mov	eax, dword ptr [rdi]
	pop	rbp
	ret
.Lfunc_end2:
	.size	_ZN3Obj4getXEv, .Lfunc_end2-_ZN3Obj4getXEv
	.cfi_endproc

	.globl	_ZN3Obj4getBEv
	.align	16, 0x90
	.type	_ZN3Obj4getBEv,@function
_ZN3Obj4getBEv:                         # @_ZN3Obj4getBEv
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp9:
	.cfi_def_cfa_offset 16
.Ltmp10:
	.cfi_offset rbp, -16
	mov	rbp, rsp
.Ltmp11:
	.cfi_def_cfa_register rbp
	mov	qword ptr [rbp - 8], rdi
	mov	rdi, qword ptr [rbp - 8]
	mov	al, byte ptr [rdi + 4]
	and	al, 1
	movzx	eax, al
	pop	rbp
	ret
.Lfunc_end3:
	.size	_ZN3Obj4getBEv, .Lfunc_end3-_ZN3Obj4getBEv
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp12:
	.cfi_def_cfa_offset 16
.Ltmp13:
	.cfi_offset rbp, -16
	mov	rbp, rsp
.Ltmp14:
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	lea	rdi, [rbp - 8]
	mov	esi, 5
	mov	edx, 1
	call	_ZN3ObjC1Eib
	lea	rdi, [rbp - 8]
	call	_ZN3Obj4getXEv
	xor	edx, edx
	mov	dword ptr [rbp - 12], eax # 4-byte Spill
	mov	eax, edx
	add	rsp, 16
	pop	rbp
	ret
.Lfunc_end4:
	.size	main, .Lfunc_end4-main
	.cfi_endproc

	.section	.text.startup,"ax",@progbits
	.align	16, 0x90
	.type	_GLOBAL__sub_I_newmain.cpp,@function
_GLOBAL__sub_I_newmain.cpp:             # @_GLOBAL__sub_I_newmain.cpp
	.cfi_startproc
# BB#0:
	push	rbp
.Ltmp15:
	.cfi_def_cfa_offset 16
.Ltmp16:
	.cfi_offset rbp, -16
	mov	rbp, rsp
.Ltmp17:
	.cfi_def_cfa_register rbp
	call	__cxx_global_var_init
	pop	rbp
	ret
.Lfunc_end5:
	.size	_GLOBAL__sub_I_newmain.cpp, .Lfunc_end5-_GLOBAL__sub_I_newmain.cpp
	.cfi_endproc

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.init_array,"aw",@init_array
	.align	8
	.quad	_GLOBAL__sub_I_newmain.cpp

	.globl	_ZN3ObjC1Eib
	.type	_ZN3ObjC1Eib,@function
_ZN3ObjC1Eib = _ZN3ObjC2Eib
	.ident	"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
