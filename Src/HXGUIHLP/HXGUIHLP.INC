
;--- keep the menu out of the .ASM source so it is not
;--- in danger catching TABS

msg1a   label byte
        db "旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�"
        db "� Maximize main window          F3  �"
        db "� Send close request to window  F4  �"
        db "� Save screen in BMP file       F5  �"
        db "� Save main window in BMP file  F6  �"
        db "� DOS shell                     F9  �"
        db "� Terminate application         F12 �"
        db "� Cancel                        ESC �"
        db "읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�"
MSG1LINES		equ 9
MSG1LINESIZE	equ ($ - msg1a) / MSG1LINES
