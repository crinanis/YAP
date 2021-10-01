.586P
.MODEL FLAT, STDCALL
includelib kerne32.lib

ExitProcess PROTO : DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4098

.CONST

.DATA
MB_OK	EQU 0
STR1	DB "Буданова К.А. 1 курс 5 группа", 0
STR2	DB "В регистре EBX находится 0 (имеется 0 элемент)", 0
STR3	DB "В регистре EBX находится 1 (отсутствует 0 элемент)", 0
HW		DD ?
myDoubles DWORD 1, 2, 3, 4, 5, 6
myPointer DWORD myDoubles
Arr		  BYTE 3, 4, 5, 0, 6, 2, 9
.CODE

main PROC
START: 
			mov ebx, myPointer
			mov eax, [ebx + 4]
			mov edx, [ebx + 8]
			
			xor eax, eax
			xor ebx, ebx

			add al, [Arr]
			add al, [Arr + 1]
			add al, [Arr + 2]
			add al, [Arr + 3]
			add al, [Arr + 4]
			add al, [Arr + 5]
			add al, [Arr + 6]

	SC: 
			mov ecx, lengthof Arr - 1
			mov ebx, 1
	Cycl:
			cmp [Arr + ecx], 0
			jne False
			je	True
	True:	
			mov	ebx, 0
			jmp EC
	False:
			loop Cycl
	EC:

	Check:
			cmp ebx, 0
			je	ZR

			invoke MessageBoxA, HW, OFFSET STR3, OFFSET STR1, MB_OK
			jmp EndCheck
	ZR:
			invoke MessageBoxA, HW, OFFSET STR2, OFFSET STR1, MB_OK
	EndCheck:
	push	0
	call ExitProcess
main ENDP

end main