//Lucas Aguiar Da Silva

#include <stdio.h> // Biblioteca padrão para entrada e saída

// Função para encontrar o maior valor e sua posição no vetor
void encontrarMaiorValor(int vetor[], int tamanho, int *maiorValor, int *posicao) {
    *maiorValor = vetor[0]; // Inicializa o maior valor como o primeiro elemento
    *posicao = 0;           // Inicializa a posição como 0

    for (int i = 1; i < tamanho; i++) { // Percorre o vetor a partir do segundo elemento
        if (vetor[i] > *maiorValor) {  // Verifica se o elemento atual é maior
            *maiorValor = vetor[i];    // Atualiza o maior valor
            *posicao = i;              // Atualiza a posição do maior valor
        }
    }
}

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser positivo.\n");
        return 1; // Encerra o programa se o tamanho não for válido
    }

    int vetor[tamanho]; // Declara o vetor com o tamanho fornecido pelo usuário

    // Preenche o vetor com valores fornecidos pelo usuário
    printf("Digite os %d valores do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Variáveis para armazenar o maior valor e sua posição
    int maiorValor, posicao;

    // Chama a função para encontrar o maior valor e sua posição
    encontrarMaiorValor(vetor, tamanho, &maiorValor, &posicao);

    // Exibe o maior valor e sua posição
    printf("\nO maior valor é: %d\n", maiorValor);
    printf("A posição do maior valor no vetor é: %d\n", posicao);

    return 0; // Indica que o programa foi executado com sucesso
}
