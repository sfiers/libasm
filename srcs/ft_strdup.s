    			global	_ft_strdup
				extern	_malloc
				extern	_ft_strlen
				extern	_ft_strcpy

            	section	.text
_ft_strdup:
				cmp		rdi, 0
				je		end
				call	_ft_strlen
				add		rax, 1
				push	rdi
				mov		rdi, rax
				call    _malloc
				cmp     rax, 0
				je		end
				pop 	rsi
				mov		rdi, rax
				call	_ft_strcpy
				ret
end:
				pop 	rdi
				mov		rax, -1
				ret