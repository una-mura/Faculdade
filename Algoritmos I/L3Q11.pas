program eleicoes2022_11;
var
    pMarina, pCiro, pLula, pBolso: integer;
    pNulo, pBranco, pMaior: integer;
    voto: char;

begin
    pMarina := 0;
    pCiro := 0;
    pLula := 0;
    pBolso := 0; 
    pNulo := 0;
    pBranco := 0;

    repeat
        writeln ('Eleição de candidato à PRESIDENTE DA REPÚBLICA');
        write ('Número de votação: ');
        readln (voto);
        
        case voto of
            '1': pMarina := pMarina + 1;
            '2': pCiro := pCiro + 1;
            '3': pLula := pLula + 1;
            '4': pBolso := pBolso + 1;
            '5': pNulo := pNulo + 1;
            '6': pBranco := pBranco + 1;
            
            else
                writeln ('Número inválido.')
        end;

        writeln ('Fim.');
        writeln ('---------');

    until (voto = '0');

    writeln ('Total de votos');
    writeln ('---------');
    writeln ('Marina Osmarina da Silva Vaz de Lima: ', pMarina);
    writeln ('Ciro Ferreira Gomes: ', pCiro);
    writeln ('Luiz Inácio Lula da Silva: ', pLula);
    writeln ('Jair Messias Bolsonaro: ', pBolso);
    writeln ('---------');
    writeln ('Votos nulos: ', pNulo);
    writeln ('Votos brancos: ', pBranco);

end.