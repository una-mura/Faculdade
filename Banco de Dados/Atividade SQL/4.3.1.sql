-- Conte quantos clientes por cidade nos temos.

SELECT Cidade, COUNT(*) AS 'Número de Clientes' FROM cliente
GROUP BY Cidade;