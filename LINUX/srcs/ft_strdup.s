    			global	ft_strdup
				extern	malloc
				extern	ft_strlen
				extern	ft_strcpy

            	section	.text
ft_strdup:
				cmp		rdi, 0
				je		end
				call	ft_strlen
				add		rax, 1
				push	rdi
				mov		rdi, rax
				call    malloc wrt ..plt
				cmp     rax, 0
				je		end
				pop 	rsi
				mov		rdi, rax
				call	ft_strcpy
				ret
end:
				pop 	rdi
				mov		rax, -1
				ret