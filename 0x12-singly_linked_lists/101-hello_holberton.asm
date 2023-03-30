section .data
string db "Hello, Holberton", 10
len equ $ - string

section .text
global main
main:
    mov edx, len
    mov ecx, string
    mov ebx, 1
    mov eax, 4
    int 0x80
    mov eax, 1
    int 0x80
