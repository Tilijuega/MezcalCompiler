section .data

	userMsg1 db " Dame un numero: ", 0xA, 0xD
	len1 equ $ - userMsg1
	dispRes1 db " Su incremento es: ", 0xA, 0xD
	len2 equ $ - dispRes1
	dispRes2 db " Su decremento es: ", 0xA, 0xD
	len3 equ $ - dispRes2

section .bss
	num1 resb 5
	res1 resb 5
	res2 resb 5

section .text
	global _start

_start:
	;Impresion userMsg1
	mov eax, 4
	mov ebx, 1
	mov ecx, userMsg1
	mov edx, len1
	int 0x80

	;Lectura del teclado
	mov eax, 3
	mov ebx, 1
	mov ecx, num1
	mov edx, 5
	int 0x80

	;Op incremento
	mov eax, [num1]
	inc eax
	mov [res1], eax

	;imprimiendo comentario incremento
	mov eax, 4
	mov ebx, 1
	mov ecx, dispRes1
	mov edx, len2
	int 0x80

	;imprimir incremento
	mov eax, 4
	mov ebx, 1
	mov ecx, res1
	mov edx, 5
	int 0x80

	;Op decremento
	mov eax, [num1]
	dec eax
	mov [res2], eax

	;imprimiendo comentario decremento
	mov eax, 4
	mov ebx, 1
	mov ecx, dispRes2
	mov edx, len3
	int 0x80

	;imprimir decremento
	mov eax, 4
	mov ebx, 1
	mov ecx, res2
	mov edx, 5
	int 0x80

	;Cierre de programa
	mov eax, 1
	int 0x80
