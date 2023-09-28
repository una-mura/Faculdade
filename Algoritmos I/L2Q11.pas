program Q11L2;
//Uma indústria de ovos de Páscoa fornece três tipos diferentes de ovos de chocolate (A, B e C). 
//Faça um programa que leia os dados relativos a um pedido e informe o total a ser pago em reais e o equivalente em dólares. 
//Suponha que, em cada pedido, somente poderá́ ser solicitado um tipo de ovo. 
//Além disso, com a intenção de satisfazer a um maior número de clientes, foi limitado o número de ovos a serem fornecidos por pedido: 
//O número máximo de unidades do ovo A é 50, do B é 30 e do C é 20. O programa deverá , inicialmente, ler os preços unitários dos produtos fornecidos e a taxa do dólar. 
//Caso o valor informado supere o limite do tipo de ovo pedido, o programa deverá emitir uma mensagem indicando que o pedido não pode ser integralmente atendido e 
//dizendo qual o número de unidades que serão fornecidas.

const
  dolar = 5.38;
  valorA = 35.00;
  valorB = 45.00;
  valorC = 40.00;

var
  ovo: char;
  quantidade: integer;
  valor: real;

begin
  writeln ('Seja bem vind@! Fornecemos os seguintes tipos de ovos:');
  writeln ('Ovos Clássicos (Tipo A)');
  writeln ('Ovos Trufados (Tipo B)');
  writeln ('Ovos Gourmet (Tipo C)');
  write ('Escolha o tipo de ovo que deseja levar (A, B ou C): ');
  readln (ovo);

  case ovo of
    'a':begin
          write ('Quantidade: ');
          readln (quantidade);
          
          if (quantidade <= 0) then
            write ('Quantidade inválida!')
          else

            if (quantidade > 50) then
              begin
                writeln ('Seu pedido atingiu o limite de unidades por tipo de ovo, e portanto não poderá ser integralmente atendido. 50 unidades serão fornecidas.');
                valor := (valorA*50);
                writeln ('Valor da compra: R$', valor:0:2);
                write ('Subtotal: US $', (valor/dolar):0:2);
              end
              
              else
              
                begin
                  valor := (valorA*quantidade);
                  writeln ('Valor da compra: R$', valor:0:2);
                  write ('Subtotal: US $', (valor/dolar):0:2);
                end
        end;

    'b':begin
          write ('Quantidade: ');
          readln (quantidade);
          
          if (quantidade <= 0) then
            write ('Quantidade inválida!')
          else

            if (quantidade > 30) then
              begin
                writeln ('Seu pedido atingiu o limite de unidades por tipo de ovo, e portanto não poderá ser integralmente atendido. 30 unidades serão fornecidas.');
                valor := (valorB*30);
                writeln ('Valor da compra: R$', valor:0:2);
                write ('Subtotal: US $', (valor/dolar):0:2);
              end
              
              else

                begin
                  valor := (valorB*quantidade);
                  writeln ('Valor da compra: R$', valor:0:2);
                  write ('Subtotal: US $', (valor/dolar):0:2);
                end
        end;

    'c':begin
          write ('Quantidade: ');
          readln (quantidade);
          
          if (quantidade <= 0) then
            write ('Quantidade inválida!')
          else

            if (quantidade > 20) then
              begin
                writeln ('Seu pedido atingiu o limite de unidades por tipo de ovo, e portanto não poderá ser integralmente atendido. 20 unidades serão fornecidas.');
                valor := (valorC*20);
                writeln ('Valor da compra: R$', valor:0:2);
                write ('Subtotal: US $', (valor/dolar):0:2);
              end
              
              else
              
                begin
                  valor := (valorC*quantidade);
                  writeln ('Valor da compra: R$', valor:0:2);
                  write ('Subtotal: US $', (valor/dolar):0:2);
                end
        end;
  end;

end.