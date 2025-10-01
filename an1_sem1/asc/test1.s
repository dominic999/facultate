.data

    dimeniune :.long 5
    vec1 :.long 1, 2, 3, 4, 5
    vec2 :.long 6, 7, 8, 9, 10
    vec3: .long 11, 12, 13, 14, 15
    counter :.long 0
    suma :.long 0
    text :.asciz "merge\n"
    text2 :.asciz "nu merge\n"
.text
.global main
procedura:
    push %ebp
    mov %esp, %ebp
    mov $24, %edx
    push (%ebp, %edx)
    mov $8, %edx
    mov (%ebp, %edx), %ebx 
    push %ebx
    mov $12, %edx
    mov (%ebp, %edx), %ecx
    push %ecx
    call produs_scalar
    add $12, %esp
    cmp $0, %eax
    jne nu_e_bine
    mov $24, %edx
    push (%ebp, %edx)
    mov $12, %edx
    push (%ebp, %edx)
    mov $16, %edx
    push (%ebp, %edx)
    call produs_scalar
    add $12, %esp
    cmp $0, %eax
    jne nu_e_bine
    push 24(%ebp)
    push 12(%ebp)
    push 16(%ebp)
    call produs_scalar
    add $12, %esp
    cmp $0, %eax
    jne nu_e_bine
    pop %ebp
    mov $1, %eax
    ret 

nu_e_bine:
    mov $0, %eax
    pop %ebp 
    ret

produs_scalar:
    push %ebp
    mov %esp, %ebp
    mov 8(%ebp), %ecx
    mov 12(%ebp), %edx
    mov $0, %ebx
    jmp while_produs

while_produs:
    cmp 16(%ebp), %ebx
    je final_while
    mov (%ecx, %ebx, 4), %eax
    mull (%edx, %ebx, 4)
    addl %eax, suma
    inc %ebx
    jmp while_produs

final_while:
    mov suma, %eax
    pop %ebp
    ret

    

main:
    push dimeniune
    push $vec1
    push $vec2
    push $vec3
    call procedura
    add $20, %esp
    cmp $1, %eax
    je sunt_buni
    push $text2
    call printf
    add $4, %esp

sunt_buni:
    push $text
    call printf
    add $4, %esp

