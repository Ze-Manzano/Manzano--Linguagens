#include <stdio.h>

int main () {
  float total = 780000.0;
  
  float primeiro, segundo, terceiro;
  
  
  primeiro = total *0.46;
  segundo = total * 0.32;
  terceiro = total - (primeiro + segundo);
  
  printf("Primeiro ganhador: R$ %.2f ", primeiro);
  printf("Segundo ganhador: R$ %.2f ", segundo);
  printf("Terceiro ganhador: R$ %.2f ", terceiro);
  return 0;
}
