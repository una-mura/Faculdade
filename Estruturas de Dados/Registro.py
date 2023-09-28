class Produto:
    def __init__(self):
        self.nome = ""
        self.codigo = ""
        self.preco = 0.0
        self.fornecedor = Fornecedor()

class Fornecedor:
    def __init__(self):
        self.nome_fantasia = ""
        self.cnpj = ""


# função que filtra por preço e cnpj
def filtraProdutos(quantidade, produtos, preco, cnpj):
    resultado = [None] * quantidade
    j = 0
    
    for i in range(quantidade):
        if produtos[i].fornecedor.cnpj == cnpj and produtos[i].preco >= preco:
            resultado[j] = produtos[i]
            j += 1

    return resultado

# função principal
def main():
    quantidade_produto = int(input("Quantidade de Produtos: "))
    produtos = [Produto() for i in range(quantidade_produto)]

    for i in range(quantidade_produto):
        produtos[i].nome = input("Nome: ")
        produtos[i].preco = float(input("Preço: "))
        produtos[i].fornecedor.cnpj = input("CNPJ do Fornecedor: ")

    produtos_filtrados = filtraProdutos(quantidade_produto, produtos, 5.0, "0")

    for i in range(len(produtos_filtrados)):
        if produtos_filtrados[i] is not None:
            print(produtos_filtrados[i].nome)

# chamada da função principal
main()
