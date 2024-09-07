	.file	"campo_minhocas.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d %d\0"
LC1:
	.ascii "%d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x70,0x6
	.cfi_escape 0x10,0x7,0x2,0x75,0x7c
	.cfi_escape 0x10,0x6,0x2,0x75,0x78
	.cfi_escape 0x10,0x3,0x2,0x75,0x74
	subl	$104, %esp
	call	___main
	movl	%esp, %eax
	movl	%eax, -104(%ebp)
	movl	$0, -28(%ebp)
	movl	$0, -32(%ebp)
	movl	$0, -36(%ebp)
	movl	$0, -40(%ebp)
	leal	-76(%ebp), %eax
	movl	%eax, 8(%esp)
	leal	-72(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	-76(%ebp), %eax
	movl	%eax, %ebx
	movl	-72(%ebp), %edi
	movl	%ebx, %eax
	subl	$1, %eax
	movl	%eax, -60(%ebp)
	movl	%ebx, %eax
	sall	$2, %eax
	movl	%eax, -100(%ebp)
	leal	-1(%edi), %eax
	movl	%eax, -64(%ebp)
	movl	%ebx, -92(%ebp)
	movl	%ebx, %eax
	movl	%eax, %ecx
	movl	$0, %ebx
	movl	%edi, -96(%ebp)
	movl	%edi, %eax
	movl	$0, %edx
	movl	%ebx, %esi
	imull	%eax, %esi
	movl	%esi, %edi
	movl	%edx, %esi
	imull	%ecx, %esi
	addl	%edi, %esi
	mull	%ecx
	leal	(%esi,%edx), %ecx
	movl	%ecx, %edx
	movl	-92(%ebp), %eax
	movl	%eax, %ecx
	movl	$0, %ebx
	movl	-96(%ebp), %eax
	movl	$0, %edx
	movl	%ebx, %esi
	imull	%eax, %esi
	movl	%esi, %edi
	movl	%edx, %esi
	imull	%ecx, %esi
	addl	%edi, %esi
	mull	%ecx
	leal	(%esi,%edx), %ecx
	movl	%ecx, %edx
	movl	-92(%ebp), %edx
	movl	-96(%ebp), %eax
	imull	%edx, %eax
	sall	$2, %eax
	leal	3(%eax), %edx
	movl	$16, %eax
	subl	$1, %eax
	addl	%edx, %eax
	movl	$16, %ebx
	movl	$0, %edx
	divl	%ebx
	imull	$16, %eax, %eax
	call	___chkstk_ms
	subl	%eax, %esp
	leal	12(%esp), %eax
	addl	$3, %eax
	shrl	$2, %eax
	sall	$2, %eax
	movl	%eax, -68(%ebp)
	movl	$0, -44(%ebp)
	jmp	L2
L6:
	movl	$0, -48(%ebp)
	jmp	L3
L4:
	movl	-100(%ebp), %ebx
	movl	%ebx, %eax
	shrl	$2, %eax
	imull	-44(%ebp), %eax
	movl	%eax, %edx
	movl	-48(%ebp), %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %edx
	movl	-68(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	%ebx, %eax
	shrl	$2, %eax
	movl	%eax, %edx
	movl	-68(%ebp), %eax
	movl	%edx, %ecx
	imull	-44(%ebp), %ecx
	movl	-48(%ebp), %edx
	addl	%ecx, %edx
	movl	(%eax,%edx,4), %eax
	addl	%eax, -28(%ebp)
	addl	$1, -48(%ebp)
L3:
	movl	-76(%ebp), %eax
	cmpl	%eax, -48(%ebp)
	jl	L4
	movl	-28(%ebp), %eax
	cmpl	-32(%ebp), %eax
	jl	L5
	movl	-28(%ebp), %eax
	movl	%eax, -32(%ebp)
L5:
	movl	$0, -28(%ebp)
	addl	$1, -44(%ebp)
L2:
	movl	-72(%ebp), %eax
	cmpl	%eax, -44(%ebp)
	jl	L6
	movl	$0, -52(%ebp)
	jmp	L7
L11:
	movl	$0, -56(%ebp)
	jmp	L8
L9:
	movl	-100(%ebp), %edx
	shrl	$2, %edx
	movl	-68(%ebp), %eax
	movl	%edx, %ecx
	imull	-56(%ebp), %ecx
	movl	-52(%ebp), %edx
	addl	%ecx, %edx
	movl	(%eax,%edx,4), %eax
	addl	%eax, -36(%ebp)
	addl	$1, -56(%ebp)
L8:
	movl	-72(%ebp), %eax
	cmpl	%eax, -56(%ebp)
	jl	L9
	movl	-36(%ebp), %eax
	cmpl	-40(%ebp), %eax
	jl	L10
	movl	-36(%ebp), %eax
	movl	%eax, -40(%ebp)
L10:
	movl	$0, -36(%ebp)
	addl	$1, -52(%ebp)
L7:
	movl	-76(%ebp), %eax
	cmpl	%eax, -52(%ebp)
	jl	L11
	movl	-40(%ebp), %eax
	cmpl	-32(%ebp), %eax
	jl	L12
	movl	-40(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	jmp	L13
L12:
	movl	-32(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
L13:
	movl	$0, %eax
	movl	-104(%ebp), %esp
	leal	-16(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
