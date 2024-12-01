#include <stdio.h>

// Função que calcula o resultado conforme a expressão fornecida
int calcularResultado(int soma, int primeiroValor, int ultimoValor) {
    int resultado = soma + (primeiroValor * 5) + (ultimoValor * 2);
    return resultado;
}

int main() {
    // Criação do vetor de 10 posições e preenchendo com valores de 1 até 10
    int vetor[10];
    int soma = 0;

    // Preenche o vetor com valores de 1 a 10
    for (int i = 0; i < 10; i++) {
        vetor[i] = i + 1;
    }

    // Calcula a soma dos elementos do vetor
    for (int i = 0; i < 10; i++) {
        soma += vetor[i];
    }

    // Obtém o primeiro e o último valor do vetor
    int primeiroValor = vetor[0];  // Primeiro valor do vetor
    int ultimoValor = vetor[9];    // Último valor do vetor

    // Chama a função calcularResultado e imprime o resultado
    int resultado = calcularResultado(soma, primeiroValor, ultimoValor);
    printf("O resultado é: %d\n", resultado);

    return 0;
}
