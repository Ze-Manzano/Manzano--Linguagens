#include <stdio.h>

int main() {
    int n;
    int binario[32]; // Armazena os digitos binarios
    int i = 0;

    printf("Digite um numero inteiro positivo (<= 64): ");
    scanf("%d", &n);

    // Valida a entrada conforme o enunciado
    if (n <= 0 || n > 64) {
        printf("Numero invalido! O numero deve ser positivo e <= 64.\n");
        return 1;
    }

    // Caso especial para n = 0 (embora o enunciado peça n positivo)
    if (n == 0) {
        printf("Valor em binario: 0\n");
        return 0;
    }

    // Calcula os restos das divisoes por 2
    int temp = n;
    while (temp > 0) {
        binario[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    // Imprime o binario na ordem correta (de tras para frente)
    printf("Valor %d em base binaria: ", n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
