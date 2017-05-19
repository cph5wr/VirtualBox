	.file	"main.cpp"
	.intel_syntax noprefix
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN6PersonC2Ev,"axG",@progbits,_ZN6PersonC5Ev,comdat
	.align 2
	.weak	_ZN6PersonC2Ev
	.type	_ZN6PersonC2Ev, @function
_ZN6PersonC2Ev:
.LFB1022:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR [rbp-8], rdi
	mov	edx, OFFSET FLAT:_ZTV6Person+16
	mov	rax, QWORD PTR [rbp-8]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR [rbp-8]
	mov	DWORD PTR [rax+8], 0
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1022:
	.size	_ZN6PersonC2Ev, .-_ZN6PersonC2Ev
	.weak	_ZN6PersonC1Ev
	.set	_ZN6PersonC1Ev,_ZN6PersonC2Ev
	.section	.rodata
.LC0:
	.string	"Hello from the Person class."
	.section	.text._ZN6Person4blahEv,"axG",@progbits,_ZN6Person4blahEv,comdat
	.align 2
	.weak	_ZN6Person4blahEv
	.type	_ZN6Person4blahEv, @function
_ZN6Person4blahEv:
.LFB1027:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	esi, OFFSET FLAT:.LC0
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1027:
	.size	_ZN6Person4blahEv, .-_ZN6Person4blahEv
	.section	.text._ZN7StudentC2Ei,"axG",@progbits,_ZN7StudentC5Ei,comdat
	.align 2
	.weak	_ZN7StudentC2Ei
	.type	_ZN7StudentC2Ei, @function
_ZN7StudentC2Ei:
.LFB1029:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	DWORD PTR [rbp-12], esi
	mov	rax, QWORD PTR [rbp-8]
	mov	rdi, rax
	call	_ZN6PersonC2Ev
	mov	edx, OFFSET FLAT:_ZTV7Student+16
	mov	rax, QWORD PTR [rbp-8]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR [rbp-8]
	mov	edx, DWORD PTR [rbp-12]
	mov	DWORD PTR [rax+12], edx
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1029:
	.size	_ZN7StudentC2Ei, .-_ZN7StudentC2Ei
	.weak	_ZN7StudentC1Ei
	.set	_ZN7StudentC1Ei,_ZN7StudentC2Ei
	.section	.rodata
.LC1:
	.string	"Hello from the Student class."
	.section	.text._ZN7Student4blahEv,"axG",@progbits,_ZN7Student4blahEv,comdat
	.align 2
	.weak	_ZN7Student4blahEv
	.type	_ZN7Student4blahEv, @function
_ZN7Student4blahEv:
.LFB1031:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	esi, OFFSET FLAT:.LC1
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1031:
	.size	_ZN7Student4blahEv, .-_ZN7Student4blahEv
	.text
	.globl	main
	.type	main, @function
main:
.LFB1032:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	edi, 16
	call	_Znwm
	mov	rbx, rax
	mov	esi, 6
	mov	rdi, rbx
	call	_ZN7StudentC1Ei
	mov	QWORD PTR [rbp-24], rbx
	mov	rax, QWORD PTR [rbp-24]
	mov	rax, QWORD PTR [rax]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR [rbp-24]
	mov	rdi, rdx
	call	rax
	mov	eax, 0
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1032:
	.size	main, .-main
	.weak	_ZTV7Student
	.section	.rodata._ZTV7Student,"aG",@progbits,_ZTV7Student,comdat
	.align 8
	.type	_ZTV7Student, @object
	.size	_ZTV7Student, 24
_ZTV7Student:
	.quad	0
	.quad	_ZTI7Student
	.quad	_ZN7Student4blahEv
	.weak	_ZTV6Person
	.section	.rodata._ZTV6Person,"aG",@progbits,_ZTV6Person,comdat
	.align 8
	.type	_ZTV6Person, @object
	.size	_ZTV6Person, 24
_ZTV6Person:
	.quad	0
	.quad	_ZTI6Person
	.quad	_ZN6Person4blahEv
	.weak	_ZTI7Student
	.section	.rodata._ZTI7Student,"aG",@progbits,_ZTI7Student,comdat
	.align 8
	.type	_ZTI7Student, @object
	.size	_ZTI7Student, 24
_ZTI7Student:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS7Student
	.quad	_ZTI6Person
	.weak	_ZTS7Student
	.section	.rodata._ZTS7Student,"aG",@progbits,_ZTS7Student,comdat
	.align 8
	.type	_ZTS7Student, @object
	.size	_ZTS7Student, 9
_ZTS7Student:
	.string	"7Student"
	.weak	_ZTI6Person
	.section	.rodata._ZTI6Person,"aG",@progbits,_ZTI6Person,comdat
	.align 8
	.type	_ZTI6Person, @object
	.size	_ZTI6Person, 16
_ZTI6Person:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS6Person
	.weak	_ZTS6Person
	.section	.rodata._ZTS6Person,"aG",@progbits,_ZTS6Person,comdat
	.align 8
	.type	_ZTS6Person, @object
	.size	_ZTS6Person, 8
_ZTS6Person:
	.string	"6Person"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1041:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], edi
	mov	DWORD PTR [rbp-8], esi
	cmp	DWORD PTR [rbp-4], 1
	jne	.L9
	cmp	DWORD PTR [rbp-8], 65535
	jne	.L9
	mov	edi, OFFSET FLAT:_ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	edx, OFFSET FLAT:__dso_handle
	mov	esi, OFFSET FLAT:_ZStL8__ioinit
	mov	edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	call	__cxa_atexit
.L9:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1041:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1042:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1042:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
