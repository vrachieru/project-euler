; Designed for OS X.
; To assemble and run:
; nasm -f macho project_euler_001.asm && ld -o project_euler_001 project_euler_001.o -arch i386 -lc -macosx_version_min 10.6 && ./project_euler_001

section .data
    format db "%i", 10, 0   ; printf output format

section .text
    global start            ; make entry point visible from outside
    extern _printf          ; make the external function available

start:
    and esp, 0xFFFFFFF0     ; round the stack pointer to the nearest multiple of 16
    sub esp, 16             ; we only need room for 2 stack arguments, but we create space for 4 to keep the stack aligned
    mov dword[esp], format  ; put the printf format as the 1st element in the stack
    mov ebx, 0              ; sum
    mov ecx, 1              ; counter
    mov esi, 3              ; 1st divisor
    mov edi, 5              ; 2nd divisor
    jmp for                 ; jump to the for loop

for:
    cmp ecx, 1000           ; did the counter reach 1000 yet?
    je finish               ; if so, we're done

                            ; check if multiple of 3
    mov eax, ecx            ; set the current counter value as the dividend
    xor edx, edx            ; clear the remainder register
    div esi                 ; divide eax by esi and store the quotient:remainder in eax:edx
    cmp edx, 0              ; is the remainder zero?
    je multiple             ; if so, go update the result

                            ; check if multiple of 5
    mov eax, ecx            ; set the current counter value as the dividend
    xor edx, edx            ; clear the remainder register
    div edi                 ; divide eax by edi and store the quotient:remainder in eax:edx
    cmp edx, 0              ; is the remainder zero?
    je multiple             ; if so, go update the result

    inc ecx                 ; increment counter
    jmp for                 ; next iteration

multiple:
    add ebx, ecx            ; add current element to the sum
    inc ecx                 ; increment counter
    jmp for                 ; next iteration

finish:
    mov dword[esp + 4], ebx ; put ebx as the 2nd element in the stack
    call _printf            ; call printf with the elements from the stack as arguments: printf(format, ebx)
    mov eax, 0x1            ; exit command to kernel
    mov ebx, 0x0            ; exit code
    int 0x80                ; make system call