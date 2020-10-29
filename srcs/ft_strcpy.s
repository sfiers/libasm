				global	_ft_strcpy

        		section	.text
_ft_strcpy:
				xor		rcx, rcx
loop:
				mov		dl, byte [rsi + rcx]
				mov		byte [rdi + rcx], dl
				cmp		dl, 0
				je		end
				inc		rcx
				jmp		loop
end:
				mov		rax, rdi
				ret

