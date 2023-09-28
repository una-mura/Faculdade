vetor = [4, 1, 3, 7, 13, 6, -5, 9]
elemento = vetor[0]
i = 0

for valor in vetor:

    if valor > elemento:
        elemento = valor
        pos = i

    i = i + 1

print(f"maior valor é {elemento} na posição {pos}")