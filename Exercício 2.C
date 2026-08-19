#include <stdio.h>

int main() {
    double valor;

    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    // %e exibe no formato nativo, ex: 1.234567e+03
    printf("Notacao cientifica: %e\n", valor);

    return 0;
}
