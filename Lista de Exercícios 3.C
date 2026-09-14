//Exercício 1
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
