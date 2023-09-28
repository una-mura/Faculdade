"""
Crie um programa que cheque vários números e diga se são primos. O programa
precisa ter pelo menos um caso, e pode ir até 100 casos. Cada número de cada
caso está num intervalo entre 2 e 10⁷.
"""

while (True):

    casos = int(input())

    while (casos < 1 or casos > 100):
        casos = int(input)

    break

for i in range(casos):

    while(True):

        num = int(input())

        while (num < 2 or num > 10 ** 7):
           num = int(input())

        break

    eh_primo = True

    for j in range(2, int((num / 2) + 1)):

        if ((num % j) == 0):
            eh_primo = False
            break

    if (eh_primo):
        print(num, 'eh primo')
    else: 
        print(num, 'nao eh primo')