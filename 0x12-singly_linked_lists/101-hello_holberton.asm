section .data
    format db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    push format
    xor  eax, eax
    call printf
    add  esp, 4
    ret
