.data
    lungime :.long 3
    unu :.float -1.0
    doi :.float 2.0
    rez :.float 0
    suma :.float 0
    prob :.float 0.5, 0.2, 0.3
.text
.global main

entropie:
    push %ebp
    mov %esp, %ebp
    sub $4, %esp
	#movss doi, %xmm0
	#movss %xmm0, 0(%esp)
	flds doi
	fstps 0(%esp)
    call logf 
	#movss %xmm0, doi
	#movss %xmm0, 0(%esp)
	fstps doi
    add $4, %esp
    mov $0, %ecx
	mov 8(%ebp), %edi
    jmp loop_entropie

loop_entropie:
    cmp 12(%ebp), %ecx
    je iesire_loop
	push %ecx
    sub $4, %esp
	flds (%edi, %ecx, 4)
	fstps 0(%esp)
    call logf
test1:
	fstps rez
	add $4, %esp
	pop %ecx
	movss rez, %xmm0
    divss doi, %xmm0 #in xmm0 se afla log_2(x)
test2: 
	movss %xmm0, rez
    movss unu, %xmm1
    mulss %xmm1, %xmm0
	movss %xmm0, rez
test3:
    mulss (%edi, %ecx, 4), %xmm0 
	movss %xmm0, rez
    movss suma, %xmm1
    addss %xmm0, %xmm1
    movss %xmm1, suma
    inc %ecx
    jmp loop_entropie

iesire_loop:
    pop %ebp
    ret

main:
    mov $prob, %edi
	push lungime
    push %edi
    call entropie
    add $8, %esp
    jmp et_exit

et_exit:
    mov $1, %eax
    mov $0, %ebx
    int $0x80
