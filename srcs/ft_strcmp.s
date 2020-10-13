			global	_ft_strcmp

            section	.text

_ft_strcmp:
			xor		rax, rax			    ; i = 0
            xor     r8, r8
			jmp		compare

increment:
			inc		rax					    ; i++

compare:
            mov     r8b, BYTE [rdi + rax]
            cmp     r8b, 0
            je      lastchar
			cmp		BYTE [rsi + rax], r8b	; str[i] == 0
			je		increment
            ja      less
            jb      above

lastchar:
            cmp     r8b, [rsi + rax]
            je      equal
            jl      less
            ja      above
equal:
            mov     rax, 0
            ret

less:
            mov     rax, -1
            ret

above:
            mov     rax, 1
            ret