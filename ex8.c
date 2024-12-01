//Lucas Aguiar Da Silva

#include <stdio.h>

// Função para exibir os números pares até o número fornecido
void exibirPares(int numero) {
    for (int i = 2; i <= numero; i += 2) { // Começa de 2 e incrementa 2 a cada iteração
        printf("%d ", i); // Exibe o número par
    }
}

int main() {
    int numero;

    // Solicita ao usuário o número até o qual ele quer ver os pares
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Chama a função para exibir os números pares
    exibirPares(numero);

    return 0;
}
