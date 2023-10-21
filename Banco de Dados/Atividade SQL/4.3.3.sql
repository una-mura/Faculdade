-- Seleciona os produtos que são comprados em mais de 2 vendas 

SELECT * FROM produto
WHERE IDProduto IN 
(
    SELECT IDProduto FROM lvp
    WHERE Quantidade > 2
);
