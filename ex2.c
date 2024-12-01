//Lucas Aguiar Da Silva

#include <stdio.h>     // Biblioteca padrão de entrada e saída
#include <string.h>    // Biblioteca para manipulação de strings (como strcpy)
#include <locale.h>    // Biblioteca para configurar localidade (ex.: língua e formatação)

typedef struct {       // Define a estrutura "Carro"
    char modelo[50];   // Campo para armazenar o modelo do carro (string de até 50 caracteres)
    int ano;           // Campo para armazenar o ano de fabricação do carro (inteiro)
    double preco;      // Campo para armazenar o preço do carro (double)
} Carro;

// Função para modificar o preço do carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco; // Acessa o campo "preco" do carro e atualiza com o novo valor
}

// Função para imprimir os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);       // Imprime o modelo do carro
    printf("Ano: %d\n", c->ano);            // Imprime o ano do carro
    printf("Preço: R$ %.2lf\n", c->preco);  // Imprime o preço do carro, formatado com duas casas decimais
}

int main() {
    setlocale(LC_ALL, "portuguese"); // Configura a localidade para português (para exibição correta de caracteres)

    Carro carro1; // Declara uma variável do tipo "Carro"

    // Inicializa os campos da estrutura "Carro"
    strcpy(carro1.modelo, "Xyz"); // Copia a string "Xyz" para o campo "modelo" de "carro1"
    carro1.ano = 2020;           // Define o ano do carro como 2020
    carro1.preco = 90000.00;     // Define o preço inicial do carro como 90000.00

    // Imprime os dados do carro antes da modificação
    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1); // Chama a função para imprimir os dados de "carro1"

    // Modifica o preço do carro
    modificarPreco(&carro1, 115000.00); // Atualiza o preço de "carro1" para 115000.00

    // Imprime os dados do carro após a modificação
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1); // Chama a função para imprimir os dados de "carro1" novamente

    return 0; // Retorna 0 indicando que o programa executou com sucesso
}
