//Lucas Aguiar Da Silva

#include <stdio.h> // Biblioteca padrão para entrada e saída

// Função para calcular a soma dos elementos de um vetor
int somarValores(int vetor[], int tamanho) {
    int soma = 0; // Inicializa a soma como 0
    for (int i = 0; i < tamanho; i++) { // Percorre todos os elementos do vetor
        soma += vetor[i]; // Adiciona o valor do elemento atual à soma
    }
    return soma; // Retorna a soma total
}

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser positivo.\n");
        return 1; // Termina o programa se o tamanho não for válido
    }

    int vetor[tamanho]; // Declara o vetor com o tamanho fornecido

    // Preenche o vetor com valores fornecidos pelo usuário
    printf("Digite os %d valores do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Calcula a soma usando a função
    int soma = somarValores(vetor, tamanho);

    // Calcula a média dos valores
    double media = (double)soma / tamanho;

    // Exibe os resultados
    printf("\nSoma dos valores: %d\n", soma);
    printf("Média dos valores: %.2lf\n", media);

    return 0; // Indica que o programa foi executado com sucesso
}
