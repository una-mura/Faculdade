program Q10L2;
//Construa um programa que simule uma calculadora. Devem ser efetuadas somente as quatro operações aritméticas (soma, subtração, multiplicação e divisão). 
//O programa deve ler os dois valores (operandos) e a operação a ser efetuada. Após o cálculo, o programa apresenta a resposta.

var
  num1, num2: real;
  operacao: char;

begin

  write ('Digite o primeiro operando: ');
  readln (num1);
  write ('Digite o segundo operando: ');
  readln (num2);
  write ('Insira a operação desejada (+, -, *, /): ');
  readln (operacao);
  
  case operacao of
    '+': begin
           write (num1:0:2, ' + ', num2:0:2, ' = ', (num1+num2):0:2)
         end;
    '-': begin
           write (num1:0:2, ' - ', num2:0:2, ' = ', (num1-num2):0:2)
         end; 
    '*': begin
           write (num1:0:2, ' * ', num2:0:2, ' = ', (num1*num2):0:2)
         end; 
    '/': begin
           if (num2 <> 0) then
              write (num1:0:2, ' / ', num2:0:2, ' = ', (num1/num2):0:2)
            else
              write ('Não é possível dividir um número por zero!')
         end;
    else
      write ('Operação inválida!')
        

  end;

    
end.