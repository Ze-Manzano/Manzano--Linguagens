#include <stdio.h>

int main() {
    double valor;

    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    printf("Notacao cientifica: %e\n", valor);

    return 0;
}
