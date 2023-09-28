program Q5L1;
//Um sistema de equações lineares da forma (ax + by = c) e (dx + ey = f) pode ser resolvido utilizando-se as seguintes fórmulas:
//(x = ce - bf / ae - bd) e (y = af - cd / ae - bd)
//Preparar um algoritmo para ler o conjunto de coeficientes (a, b, c, d, e e f) e imprimir a solução, ou seja, x e y. 

var
  x, y, a, b, c, d, e, f, op1, op2, op3: real;
begin
  write ('Insira os valores de A ate F: ');
  read (a);
  read (b);
  read (c);
  read (d);
  read (e);
  readln (f);
  op1 := ((c*e)-(b*f));
  op2 := ((a*f)-(c*d));
  op3 := ((a*e)-(b*d));
 
begin  
  if (op3 = 0) then
	  write ('Dados invalidos!')
end;  
  
  x := ((op1)/(op3));
  y := ((op2)/(op3));
  
  write ('x = ', x:0:2, ' e Y = ', y:0:2);		       
end.