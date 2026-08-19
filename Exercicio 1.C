#include <stdio.h>

int main() {
    int num1, num2;

    // Leitura dos dois números inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Impressão na ordem inversa da leitura
    printf("\nNumeros na ordem inversa:\n");
    printf("%d\n", num2);
    printf("%d\n", num1);

    return 0;
}
