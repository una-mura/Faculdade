program Q13L1;
//Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se nome, preço e percentual de desconto. 
//Faça um algoritmo que imprima nome, preço e preço com desconto de cada artigo e o total a pagar.

const
  precoBarraChocolate = 48;
  precoMorangos = 35;
  precoPaoForma = 15;
  precoSorveteBaunilha = 13;
  descBarraChocolate = 0.5;
  descMorangos = 0.2;
  descPaoForma = 0.4;
  descSorveteBaunilha = 0.3;

var
  totalPagar: real;
  prod0, prod1, prod2, prod3: string;
  preco0, preco1, preco2, preco3, precoDesc0, precoDesc1, precoDesc2, precoDesc3, precoDescBarraChocolate, precoDescMorangos, precoDescPaoForma, precoDescSorveteBaunilha: real;

begin
  writeln ('Saudações! Quais são os produtos desejados?');
  write ('0: ');
  readln (prod0);

  case prod0 of

    'Barra de chocolate': begin
      precoDescBarraChocolate := (precoBarraChocolate - (precoBarraChocolate*descBarraChocolate));
      preco0 := precoBarraChocolate;
      precoDesc0 := precoDescBarraChocolate;
    end;

    'Morangos': begin
      precoDescMorangos := (precoMorangos - (precoMorangos*descMorangos));
      preco0 := precoMorangos;
      precoDesc0 := precoDescMorangos;
    end;

    'Pão de forma': begin
      precoDescPaoForma := (precoPaoForma - (precoPaoForma*descPaoForma));
      preco0 := precoPaoForma;
      precoDesc0 := precoDescPaoForma;
    end;

    'Sorvete de baunilha': begin
      precoDescSorveteBaunilha := (precoSorveteBaunilha - (precoSorveteBaunilha*descSorveteBaunilha));
      preco0 := precoSorveteBaunilha;
      precoDesc0 := precoDescSorveteBaunilha;
    end;

  end;

  write ('1: ');
  readln (prod1);

  case prod1 of
    
     'Barra de chocolate': begin
      precoDescBarraChocolate := (precoBarraChocolate - (precoBarraChocolate*descBarraChocolate));
      preco1 := precoBarraChocolate;
      precoDesc1 := precoDescBarraChocolate;
    end;

    'Morangos': begin
      precoDescMorangos := (precoMorangos - (precoMorangos*descMorangos));
      preco1 := precoMorangos;
      precoDesc1 := precoDescMorangos;
    end;

    'Pão de forma': begin
      precoDescPaoForma := (precoPaoForma - (precoPaoForma*descPaoForma));
      preco1 := precoPaoForma;
      precoDesc1 := precoDescPaoForma;
    end;

    'Sorvete de baunilha': begin
      precoDescSorveteBaunilha := (precoSorveteBaunilha - (precoSorveteBaunilha*descSorveteBaunilha));
      preco1 := precoSorveteBaunilha;
      precoDesc1 := precoDescSorveteBaunilha;
    end;

    else

    write ('Produto inválido ou indisponível!')

  end;

  write ('2: ');
  readln (prod2);
  
  case prod2 of
    
    'Barra de chocolate': begin
      precoDescBarraChocolate := (precoBarraChocolate - (precoBarraChocolate*descBarraChocolate));
      preco2 := precoBarraChocolate;
      precoDesc2 := precoDescBarraChocolate;
    end;

    'Morangos': begin
      precoDescMorangos := (precoMorangos - (precoMorangos*descMorangos));
      preco2 := precoMorangos;
      precoDesc2 := precoDescMorangos;
    end;

    'Pão de forma': begin
      precoDescPaoForma := (precoPaoForma - (precoPaoForma*descPaoForma));
      preco2 := precoPaoForma;
      precoDesc2 := precoDescPaoForma;
    end;

    'Sorvete de baunilha': begin
      precoDescSorveteBaunilha := (precoSorveteBaunilha - (precoSorveteBaunilha*descSorveteBaunilha));
      preco2 := precoSorveteBaunilha;
      precoDesc2 := precoDescSorveteBaunilha;
    end;

    else 

    write ('Produto inválido ou indisponível!')

  end;

  write ('3: ');
  readln (prod3);

  case prod3 of

    'Barra de chocolate': begin
      precoDescBarraChocolate := (precoBarraChocolate - (precoBarraChocolate*descBarraChocolate));
      preco3 := precoBarraChocolate;
      precoDesc3 := precoDescBarraChocolate;
    end;

    'Morangos': begin
      precoDescMorangos := (precoMorangos - (precoMorangos*descMorangos));
      preco3 := precoMorangos;
      precoDesc3 := precoDescMorangos;
    end;

    'Pão de forma': begin
      precoDescPaoForma := (precoPaoForma - (precoPaoForma*descPaoForma));
      preco3 := precoPaoForma;
      precoDesc3 := precoDescPaoForma;
    end;

    'Sorvete de baunilha': begin
      precoDescSorveteBaunilha := (precoSorveteBaunilha - (precoSorveteBaunilha*descSorveteBaunilha));
      preco3 := precoSorveteBaunilha;
      precoDesc3 := precoDescSorveteBaunilha;
    end;

    else

    write ('Produto inválido ou indisponível!')
    
  end;

  totalPagar := precoDesc0 + precoDesc1 + precoDesc2 + precoDesc3;
  writeln (prod0);
  writeln ('Preço: R$ ', preco0:0:2);
  writeln ('Preco c/ desconto: R$ ', precoDesc0:0:2);

  writeln (prod1);
  writeln ('Preço: R$ ', preco1:0:2);
  writeln ('Preco c/ desconto: R$ ', precoDesc1:0:2);

  writeln (prod2);
  writeln ('Preço: R$ ', preco2:0:2);
  writeln ('Preco c/ desconto: R$ ', precoDesc2:0:2);

  writeln (prod3);
  writeln ('Preço: R$ ', preco3:0:2);
  writeln ('Preco c/ desconto: R$ ', precoDesc3:0:2);

  writeln ('Total a pagar: R$ ', totalPagar:0:2);
  
end.