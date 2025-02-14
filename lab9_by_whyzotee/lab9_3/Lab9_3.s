	.global	main
main:
	MOV	R1, #0
	MOV	R2, #1
	MOV	R4, #2
	MOV	R5, #3

	@ SP is decremented by 8 bytes before pushing R4 and R5
	@ The ! (Write-Back symbol) updates SP accordingly.
	STMDB	SP!, {R4, R5}

	@ R2 and R1 are popped, respectively.
	@ SP is incremented after (IA) that
	LDMIA	SP!, {R1, R2}
	ADD	R0, R1, #0
	ADD	R0, R0, R2
end:
	BX LR
