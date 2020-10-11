			global	_ft_strlen

            section	.text

_ft_strlen:
			xor		rax, rax			; i = 0
			jmp		compare

increment:
			inc		rax					; i++

compare:
			cmp		BYTE [rdi + rax], 0	; str[i] == 0
			jne		increment
			ret							; return i