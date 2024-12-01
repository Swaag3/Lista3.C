//Lucas Aguiar Da Silva

#include <stdio.h> // Biblioteca padrão para entrada e saída

// Função que exibe os números ímpares de 1 até 'limite', exceto os múltiplos de 7
void exibirImparesExcetoSete(int limite) {
    for (int i = 1; i <= limite; i++) { // Itera de 1 até o valor fornecido pelo usuário
        if (i % 2 != 0 && i % 7 != 0) { // Verifica se 'i' é ímpar e não é múltiplo de 7
            printf("%d ", i); // Exibe o número
        }
    }
    printf("\n"); // Adiciona uma nova linha ao final
}

int main() {
    int numero; // Variável para armazenar o número fornecido pelo usuário

    // Solicita ao usuário o número limite
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número fornecido é válido (positivo)
    if (numero <= 0) {
        printf("Por favor, insira um número inteiro positivo maior que zero.\n");
    } else {
        printf("Números ímpares de 1 até %d (exceto múltiplos de 7):\n", numero);
        exibirImparesExcetoSete(numero); // Chama a função para exibir os números
    }

    return 0; // Indica que o programa foi executado com sucesso
}
