//lucas Aguiar Da Silva

#include <stdio.h> // Biblioteca padrão para entrada e saída

// Função que calcula a média aritmética de 4 notas
double calcularMedia(double n1, double n2, double n3, double n4) {
    return (n1 + n2 + n3 + n4) / 4; // Soma as notas e divide por 4
}

int main() {
    double nota1, nota2, nota3, nota4, media; // Variáveis para armazenar as notas e a média

    // Solicita ao usuário que digite as 4 notas
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%lf", &nota4);

    // Chama a função para calcular a média
    media = calcularMedia(nota1, nota2, nota3, nota4);

    // Imprime a média
    printf("\nMédia: %.2lf\n", media);

    // Verifica se o aluno foi aprovado ou reprovado e exibe a mensagem correspondente
    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}
