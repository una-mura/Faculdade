-- Mostre todos os nomes dos produtos comprados pela cliente com IDCliente=2 

SELECT Nome FROM produto
JOIN lvp ON produto.IDProduto = lvp.IDProduto
JOIN venda ON lvp.IDVenda = venda.IDVenda
WHERE venda.IDCliente = 2;
