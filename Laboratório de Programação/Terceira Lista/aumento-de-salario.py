"""
A companhia ABC decidiu aumentar o salarioário de seus empregados,
seguindo uma tabela de valores para aplicar o acréscimo com
base em intervalos salariais específicos vinculados a acréscimos.
Recebendo o valor do salário de um empregado, calcule e exiba
o novo salário, assim como o percentual de aumento e o valor
do aumento em si.
"""

salario = float(input())
porcentagem = (0.15, 0.12, 0.1, 0.07, 0.04)

if (salario >= 0 and salario <= 400.00):

    reajuste = salario * porcentagem[0]
    salario = salario + reajuste

    print('Novo salario: {:.2f}'.format(salario))
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: {} %'.format(int(porcentagem[0] * 100)))

elif (salario > 400 and salario <= 800.00):

    reajuste = salario * porcentagem[1]
    salario = salario + reajuste

    print('Novo salario: {:.2f}'.format(salario))
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: {} %'.format(int(porcentagem[1] * 100)))

elif (salario > 800 and salario <= 1200.00):

    reajuste = salario * porcentagem[2]
    salario = salario + reajuste

    print('Novo salario: {:.2f}'.format(salario))
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: {} %'.format(int(porcentagem[2] * 100)))

elif (salario > 1200 and salario <= 2000.00):

    reajuste = salario * porcentagem[3]
    salario = salario + reajuste

    print('Novo salario: {:.2f}'.format(salario))
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: {} %'.format(int(porcentagem[3] * 100)))

else:

    reajuste = salario * porcentagem[4]
    salario = salario + reajuste

    print('Novo salario: {:.2f}'.format(salario))
    print('Reajuste ganho: {:.2f}'.format(reajuste))
    print('Em percentual: {} %'.format(int(porcentagem[4] * 100)))