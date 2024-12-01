//Lucas Aguiar Da Silva

#include <stdio.h>

// Função para multiplicar os valores do vetor
int multiplicarVetor(int vetor[], int tamanho) {
    int resultado = 1; // Inicializa o resultado como 1 (neutro para multiplicação)
    
    // Laço para multiplicar todos os valores do vetor
    for (int i = 0; i < tamanho; i++) {
        resultado *= vetor[i]; // Multiplica o valor do vetor ao resultado
    }
    
    return resultado; // Retorna o resultado final
}

int main() {
    int tamanho;
    
    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Cria o vetor com o tamanho fornecido
    int vetor[tamanho];
    
    // Solicita ao usuário os valores para o vetor
    printf("Digite os %d valores do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Chama a função para multiplicar os valores do vetor
    int resultado = multiplicarVetor(vetor, tamanho);
    
    // Exibe o resultado da multiplicação
    printf("O resultado da multiplicação dos valores do vetor é: %d\n", resultado);

    return 0;
}
