//Lucas Aguiar Da Silva

#include <stdio.h>

// Função para verificar e exibir o maior número
void maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os números são iguais.\n");
    }
}

int main() {
    int num1, num2;

    // Solicita os dois números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Chama a função para verificar o maior número
    maiorNumero(num1, num2);

    return 0;
}
