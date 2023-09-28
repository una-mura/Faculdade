"""
Leia os elementos de uma matriz 12x12 e exiba a soma ou a média dos
elementos acima da diagonal principal. Cada elemento é um float, e
as flags de soma e média são caracteres 'S' e 'M' respectivamente.
"""

matriz = []

for i in range(12):
    
    coluna = []

    for j in range(12):
        coluna.append(0.0)

    matriz.append(coluna)

op = input()

while (op != 'S' and op != 'M'):
    op = input()

cont = 0
soma = 0.0

for i in range(12):
    for j in range(12):

        matriz[i][j] = float(input())
        
        if (i > j):
            soma = soma + matriz[i][j]
            cont = cont + 1

if (op == 'S'):
    print('{:.1f}'.format(soma))
else:
    print('{:.1f}'.format(soma / cont))
