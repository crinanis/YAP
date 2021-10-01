.586P
.MODEL FLAT, STDCALL
includelib kerne32.lib

ExitProcess PROTO : DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4098

.CONST

.DATA
MB_OK	EQU 0
STR1	DB "Моя первая программа", 0
STR2	DB "Результат = ", 0
HW		DD ?

.CODE

main PROC
START: 
			MOV ax, 3
			ADD ax, 2
			MOVZX eax, ax
			ADD eax, 30h
			MOV ebx, LENGTHOF STR2 - 1
			MOV [STR2 + ebx], al
			invoke MessageBoxA, HW, OFFSET STR2, OFFSET STR1, MB_OK
	
	push - 1
	call ExitProcess
main ENDP

end main