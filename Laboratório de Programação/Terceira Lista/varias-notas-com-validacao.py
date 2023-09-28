"""
Escreva um programa que leia duas notas de um estudante. Calcule e exiba
a média semestral. O programa deve aceitar apenas valores válidos (notas
devem estar dentro do intervalo [0.10]). Cada nota deve ser validada de
maneira separada. O programa deve exibir "novo calculo (1-sim 2-nao)".
"""

while (True):

    nota1 = float(input())

    while (nota1 < 0 or nota1 > 10):
        print('nota invalida')
        nota1 = float(input())

    nota2 = float(input())

    while (nota2 < 0 or nota2 > 10):
        print('nota invalida')
        nota2 = float(input())

    media = (nota1 + nota2) / 2

    print('media = {:.2f}'.format(media))

    while (True):

        print('novo calculo (1-sim 2-nao)')
        flag = int(input())

        if (flag == 1 or flag == 2):
            break

    if (flag == 2):
        break