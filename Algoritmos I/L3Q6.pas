program primoOuN_6;
var
    num, cont, cont2: integer;
begin
    repeat
        write ('Insira um número: ');
        readln (num);
        
        if (num = 1) then
            writeln ('Dado inválido!')
        else

        begin
            if (num > 1) then
            begin
                cont := 0;
                cont2 := 0;
                repeat
                    cont := cont + 1;
            
                    if ((num mod cont) = 0) then
                    //a condicional divide o número pelo contador, q tá subindo a cada repetição.
                        cont2 := cont2 + 1;
                        //o contador dois só ganha pontos qnd o mod da condicional for igual a zero.
                        
                until (num = cont);
                
                if (cont2 = 2) then
                    //se o contador dois tem 2 pontos são pontos da divisão por 1 e pelo próprio valor de 'num'.
                        writeln ('O número é primo.')
                else
                    if (cont2 > 2) then
                        writeln ('O número não é primo.');
            end
        end;    
        
    until (num <= 1);
    
    if (num <= 1) then
        write ('Fim.')
           
end.