"""
Escreva um programa que receba números e monte uma matriz de ordem igual
aos números informados. O programa é encerrado ao receber zero. A matriz
deve estar formatada com espaçamento 3.
"""

num = int(input())

while (True):

    for i in range(1, num+1):
        for j in range(1, num+1):

            #distância borda superior
            dist = i

            #distância borda esquerda
            if (j < dist):
                dist = j

            #distância borda inferior
            if (num-i+1 < dist):
                dist = num - i + 1

            #distância borda direita
            if (num-j+1 < dist):
                dist = num - j + 1

            if j < num:
                print('{:3d}'.format(dist), end=' ')
            else:
                print('{:3d}'.format(dist), end='\n')

    if (num != 0):
        print()

    if (num == 0):
        break    
  
    num = int(input())
        