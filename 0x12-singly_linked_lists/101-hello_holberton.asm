section .data
    hello: db "Hello, Holberton", 10, 0   ; the Message to be printed (null-terminated string)

section .text
    global main

    extern printf

main:

    push rbp
    mov rbp, rsp

    ; Call printf with the message string
    lea rdi, [hello]
    xor eax, eax    ; Clear return value
    call printf

    ; return and clean up stack
    mov rsp, rbp
    pop rbp
    xor eax, eax    ; Return 0
    ret
