//LUCAS AGUIAR DA SILVA

#include <stdio.h>

// Função para retornar o menor número entre três números
int menorNumero(int num1, int num2, int num3) {
    int menor = num1; // Inicializa o menor com o primeiro número

    // Compara com os outros dois números
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    return menor; // Retorna o menor número
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

    // Chama a função para obter o menor número e exibe o resultado
    int menor = menorNumero(num1, num2, num3);
    printf("O menor número é: %d\n", menor);

    return 0;
}
