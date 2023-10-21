--  Mostre o total de cada venda comprado pelo cliente com IDCliente=2

SELECT V.IDCliente, V.IDVenda, ROUND(SUM(L.Preco * L.Quantidade), 2) AS 'Valor Total da Venda'
FROM Venda V
JOIN LVP L ON L.IDVenda = V.IDVenda 
WHERE V.IDCliente = 2
GROUP BY V.IDVenda;
