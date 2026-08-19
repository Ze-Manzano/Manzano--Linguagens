#include <stdio.h>

int main() {
    int n;
    int binario[7];
    int i = 0;

    printf("Digite um numero (1 a 64): ");
    scanf("%d", &n);

    if (n < 1 || n > 64) {
        printf("Numero invalido!\n");
        return 1;
    }

    // Converte para binario
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Mostra o resultado
    printf("Valor em binario: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    printf("\n");

    return 0;
}
