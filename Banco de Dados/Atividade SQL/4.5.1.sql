-- Seleciona todas as vendas realizadas para o Roberto 

SELECT * FROM venda
JOIN cliente ON venda.IDCliente = cliente.IDCliente
WHERE cliente.Nome = 'Roberto';
