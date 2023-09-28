soma = 0

for numero in range(1, 501):
    if numero % 3 == 0 and numero % 2 != 0:
        soma += numero

print("A soma dos números ímpares múltiplos de 3 no intervalo de 1 a 500 é:", soma)
