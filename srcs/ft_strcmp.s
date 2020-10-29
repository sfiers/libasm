			global  _ft_strcmp

            section .text
_ft_strcmp:
			xor		rax, rax
            xor     r8, r8
            xor     r9, r9
			jmp		compare
increment:
			inc		rax
compare:
            mov     r8b, BYTE [rdi + rax]
            cmp     r8b, 0
            je      lastchar
			cmp		BYTE [rsi + rax], r8b
            je      increment
lastchar:
            mov     r9b, byte[rsi + rax]
            sub     r8d, r9d
            mov     eax, r8d
            ret