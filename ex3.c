//Lucas Aguiar Da Silva

#include <stdio.h> // Biblioteca padrão de entrada e saída

// Declaração da função calcularResultado antes de sua definição
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado; // Declara um vetor de 5 inteiros, uma variável auxiliar 'i' e outra para armazenar o resultado

    // Loop para inicializar o vetor
    for (i = 0; i < 5; i++) {       // Itera de 0 a 4 (total de 5 elementos)
        vetor[i] = i * 2;           // Preenche cada posição do vetor com o valor de 'i' multiplicado por 2
    }

    // Chama a função calcularResultado passando o vetor e o tamanho (5)
    resultado = calcularResultado(vetor, 5);

    // Imprime o resultado retornado pela função
    printf("O resultado é: %d\n", resultado);

    return 0; // Retorna 0 indicando que o programa foi executado com sucesso
}

// Definição da função calcularResultado
int calcularResultado(int v[], int n) {
    int i, soma = 0; // Declara a variável auxiliar 'i' e inicializa a variável 'soma' com 0

    // Loop para somar os elementos do vetor
    for (i = 0; i < n; i++) {  // Itera sobre todos os 'n' elementos do vetor
        soma += v[i];          // Adiciona o valor do elemento atual (v[i]) à variável 'soma'
    }

    return soma; // Retorna o valor da soma de todos os elementos do vetor
}
