	global	main
	extern	printf

	section	.text		;
main:
	push	message
	mov	rdi, format
	mov	rsi, message
	mov	rax, 0		;
	call	printf

	pop	message		;

	mov	rax, 0		;
	ret

	section .data
message:
	db 	"Hello, Holberton", 0 ;
format:
	db	"%s", 10, 0	;
