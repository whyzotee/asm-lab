    .global main
main:
    MOV R0, #0
    MOV R1, #2
    MOV R2, #4
    AND R0, R1, R2
    BX LR
