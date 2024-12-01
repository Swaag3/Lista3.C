//LUCAS AGUIAR DA SILVA

#include <stdio.h>

// Função para exibir os números do vetor na ordem inversa
void exibirInverso(int vetor[], int tamanho) {
    printf("Números na ordem inversa:\n");
    for (int i = tamanho - 1; i >= 0; i--) { // Começa do último índice e vai até o primeiro
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];

    // Preenche o vetor com números fornecidos pelo usuário
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Chama a função para exibir os números na ordem inversa
    exibirInverso(vetor, 10);

    return 0;
}
