#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nNumeros na ordem inversa:\n");
    printf("%d\n", num2);
    printf("%d\n", num1);

    return 0;
}
