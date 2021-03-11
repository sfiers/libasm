    			global	ft_write
				extern	__errno_location

            	section	.text
ft_write:
				mov     rax, 0x1
           		syscall
				cmp		rax, 0
				jl      error
				ret
error:
				neg		rax
				push	rax
            	call    __errno_location wrt ..plt
				pop     QWORD[rax]
				mov     rax, -1
            	ret
