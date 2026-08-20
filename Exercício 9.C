#include <stdio.h>

int main () {
 int tempo, velocidade;
 double distancia, litros;
 
 printf("Digite o tempo gasto: ");
 scanf("%d", &tempo);
 printf("Agora digite a velocidade: ");
 scanf("%d", &velocidade);
 distancia = tempo * velocidade;
 litros = distancia / 12.0;
 
 printf("%.3lf ", litros);
  return 0;
}
