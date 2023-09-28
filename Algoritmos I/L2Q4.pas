program Q4L2;
//Faça um programa que leia dois valores, o primeiro servindo de indicador de operação e o segundo correspondendo ao raio de um círculo. 
//Caso o primeiro valor lido seja igual a 1, calcular e imprimir a área desse círculo. 
//Se o valor lido for 2, calcular e imprimir o perímetro do círculo. 
//Se o valor lido for diferente desses dois valores, imprimir uma mensagem dizendo que foi fornecido um indicador incorreto para a operação a ser realizada.

var
  i, r: integer;
  a, p: real;
begin
  write ('Qual operação deseja realizar? (1 para cálculo da área, 2 para cálculo do perímetro): ');
  readln (i);

  write ('Insira o valor do raio do círculo: ');
  readln (r);

    case i of
      1: Begin
        a := (pi*sqr(r));
        write ('Área: ', a:0:2);
      end;
      2: Begin
        p := (2*pi*r);
        write ('Perímetro: ', p:0:2);
      end;
    else
      write ('O indicador fornecido é incorreto!')
    end;

end.