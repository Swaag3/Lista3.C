//LUCAS AGUIAR DA SIVA

#include <stdio.h>

// Função para calcular a média de três números inteiros
float calcularMedia(int num1, int num2, int num3) {
    float media = (num1 + num2 + num3) / 3.0;  // Realiza a soma e divide por 3.0 para garantir a média em ponto flutuante
    return media;
}

int main() {
    int num1, num2, num3;

    // Solicita os três números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Chama a função para calcular a média
    float media = calcularMedia(num1, num2, num3);

    // Exibe o resultado da média
    printf("A média dos três números é: %.2f\n", media);

    return 0;
}
