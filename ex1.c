//Lucas Aguiar Da Silva

#include <stdio.h> // Biblioteca padrão para entrada e saída

// Definição da estrutura "pessoa", que contém peso, idade e altura
typedef struct {
    double peso;  // Armazena o peso da pessoa (em kg)
    int idade;    // Armazena a idade da pessoa (em anos)
    double altura; // Armazena a altura da pessoa (em metros)
} pessoa;

// Função para imprimir os dados de uma pessoa
void imprimePessoa(pessoa p) {
    // Exibe os valores dos atributos da pessoa formatados
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf.\n", p.peso, p.idade, p.altura);
}

// Função para preencher os dados de uma pessoa com entrada do usuário
void preenchePessoa(pessoa *p) {
    printf("Digite o peso: ");      // Solicita o peso ao usuário
    scanf("%lf", &p->peso);         // Lê o peso digitado e armazena na estrutura
    printf("Digite a idade: ");     // Solicita a idade ao usuário
    scanf("%d", &p->idade);         // Lê a idade digitada e armazena na estrutura
    printf("Digite a altura: ");    // Solicita a altura ao usuário
    scanf("%lf", &p->altura);       // Lê a altura digitada e armazena na estrutura
}

int main() {
    pessoa pessoas[5]; // Declara um vetor de 5 elementos do tipo "pessoa"

    // Loop para preencher os dados do vetor de pessoas
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1); // Indica qual pessoa está sendo preenchida
        preenchePessoa(&pessoas[i]);  // Chama a função para preencher os dados
    }

    // Verifica se a idade da primeira pessoa é maior que 20
    if (pessoas[0].idade > 20) {
        pessoas[0].idade++; // Incrementa a idade da primeira pessoa em 1
    }

    // Loop para imprimir os dados de todas as pessoas no vetor
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1); // Indica qual pessoa está sendo exibida
        imprimePessoa(pessoas[i]);      // Chama a função para exibir os dados
    }

    return 0; // Retorna 0 para indicar execução bem-sucedida
}
