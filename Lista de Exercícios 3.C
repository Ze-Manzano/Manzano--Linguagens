//Exercício 1 (05)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {

    int saque, quantidade1, quantidade2, quantidade3, quantidade4, quantidade5, quantidade6, quantidade7, nota;

    printf("Insira o valor do saque: ");
    scanf("%d", &saque);

    //nota 100
    quantidade1 = saque / 100;

    saque = saque % 100;

    //nota 50
    quantidade2 = saque / 50;

    saque = saque % 50;

    //nota 20
    quantidade3 = saque / 20;

    saque = saque % 20;

    //nota 10
    quantidade4 = saque / 10;

    saque = saque % 10;

    //nota 5
    quantidade5 = saque / 5;

    saque = saque % 5;

    //nota 2
    quantidade6 = saque / 2;

    saque = saque % 2;

    //moeda 1
    quantidade7 = saque / 1;

    saque = saque % 1;

    printf("O valor do saque = %d\n", saque);
    printf ("Notas de 100: %d\n", quantidade1);
    printf ("Notas de 50: %d\n", quantidade2);
    printf ("Notas de 20: %d\n", quantidade3);
    printf ("Notas de 10: %d\n", quantidade4);
    printf ("Notas de 5: %d\n", quantidade5);
    printf ("Notas de 2: %d\n", quantidade6);
    printf ("Notas de 1: %d\n", quantidade7);

    return 0;

}


//Exercício 3 (07)
#include <stdio.h>

double calcularINSS(double salario) {
    double imposto, salariofinal;

    if (salario <= 1412.00) {
        imposto = salario * 0.075;
        salariofinal = salario - imposto;

    }
    else if (salario >=1412.01 & salario <=2666.68) {
        imposto = salario * 0.09;
        salariofinal = salario - imposto;

    }

    else if (salario >= 2666.69 & salario <=4000.03) {
        imposto = salario * 0.12;
        salariofinal = salario - imposto;

    }

    else if (salario >= 4000.04) {
        imposto = salario * 0.14;
        salariofinal = salario - imposto;

    }
    return salariofinal;
}


int main() {
    double salario, salariofinal;

    printf("Digite o valor de seu salario: ");
    scanf("%lf", &salario);

    salariofinal =calcularINSS(salario);

    printf("Seu salario agora e de: %.2lf\n", salariofinal);


    return 0;
}

//Exercício 4 (08)
#include <stdio.h>

double calcularIRPF(double salariobase) {

    double imposto;

    if (salariobase <= 2259.20) {
        imposto = 0.0;
    }

    else if (salariobase <=2826.65) {
        imposto = (salariobase * 0.075) - 169.44;
    }

    else if (salariobase <=3751.05) {
        imposto = (salariobase * 0.15) - 381.44;
    }

    else if (salariobase <=4664.68) {
        imposto = (salariobase * 0.225) - 662.77;
    }

    else {
        imposto = (salariobase * 0.275) - 896.00;
    }

    return imposto;
}
int main () {
    double salariobase, imposto;
    printf("Digite seu salario base: ");
    scanf("%lf", &salariobase);

    imposto = calcularIRPF(salariobase);

    printf ("Este e o imposto de renda referente a seu salario: %.2lf\n", imposto);


    return 0;
}
