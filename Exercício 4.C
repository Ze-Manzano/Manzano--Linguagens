#include <stdio.h>
#include <stdlib.h>
 int main() {
 double salario, vendas, comissao, total;
 
 printf("Digite seu salario: ");
 scanf("%lf", &salario);
 printf("Agora digire suas vendas: ");
scanf("%lf", &vendas);

comissao = vendas *0.15;

total = salario + comissao;

printf("Seu salario agora e: %.2lf", total);

return 0;

 }
