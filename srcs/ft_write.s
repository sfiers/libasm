		    extern ___error

        	global	_ft_write

            section	.text

_ft_write:
            mov     rax, 0x2000004 ; write
            syscall
            jc      error
            ret

error:
            mov     r8, rax
            call    ___error
            mov     [rax], r8
            mov     rax, -1
            ret