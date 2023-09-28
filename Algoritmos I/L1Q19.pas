program Q19L1;
//O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que lê a quantidade de cada item que foi consumido por um cliente e calcule a conta final.
// Hambúrguer...R$ 3,00; Cheeseburger...R$ 2,50; Fritas...R$ 2,50; Refrigerante...R$ 2,00; Milkshake...R$ 4,00.

const
  hamburguer = 3;
  cheeseburger = 2.50;
  fritas = 2;
  milkshake = 4;

var
  qtdHam, qtdChe, qtdFri, qtdMilk, conta: real;

begin
  write ('Hambúrgueres consumidos: ');
  readln (qtdHam);
  write ('Cheeseburgeres consumidos: ');
  readln (qtdChe); 
  write ('Fritas consumidas: ');
  readln (qtdFri);
  write ('Milkshakes consumidos: ');
  readln (qtdMilk);

  conta := (qtdHam*hamburguer) + (qtdFri*fritas) + (qtdChe*cheeseburger) + (qtdMilk*milkshake);
  
  write ('Sua conta é de R$ ', conta:0:2)

end.