"""
Leia dois floats A e B, se correspondem a duas notas de um estudante.
Depois, calcule a média do estudante, considerando que a nota A é de
peso 3.5 e B é de peso 7.5. Cada nota pode valer de zero a dez.
"""

A = float(input())
B = float(input())

while (A < 0.0 or A > 10.0):
    A = float(input())
while (B < 0.0 or B > 10.0):
    B = float(input())

A = A * 3.5
B = B * 7.5

print('MEDIA = {:.5f}'.format((A + B) / 11))