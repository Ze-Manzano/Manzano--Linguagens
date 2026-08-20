#include <stdio.h>

int main () {
  int idadeDias;
  int anos, meses, dias;
  
  printf("Digite a quantidade de dias: ");
  scanf("%d", &idadeDias);
  
  anos = idadeDias / 365;
  idadeDias = idadeDias % 365;
  
  meses= idadeDias / 30;
  
  dias = idadeDias % 30;
  
  printf("%d ano(s) ", anos);
  printf("%d mes(es)", meses);
  printf("%d dia(s)", dias);
  
  return 0;
}
