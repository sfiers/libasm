        global  _ft_strcpy

        section .text

_ft_strcpy:
		xor		rax, rax

loop:
		mov		r8b, [rsi + rax]
		mov		[rdi + rax], r8b
		cmp		r8b, 0
		je		end
		inc		rax
		jmp		loop

end:
		mov		rax, rdi
		ret