	global	_main
	extern	_printf

	section	.text
_main:
	push	message
	call	_printf
	add	esp, 4
	ret
message:
	db 	'Hello, Holberton', 10, 0
