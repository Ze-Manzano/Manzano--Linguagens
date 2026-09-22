//Exercicio 1
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

//Exercicio 2
#include <stdio.h>

int main() {
    double valor;

    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    printf("Notacao cientifica: %e\n", valor);

    return 0;
}

//Exercicio 3
#include <stdio.h>

int main() {
    int n;
    int binario[7];
    int i = 0;

    printf("Digite um numero (1 a 64): ");
    scanf("%d", &n);

    if (n < 1 || n > 64) {
        printf("Numero invalido!\n");
        return 1;
    }

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    
    printf("Valor em binario: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    printf("\n");

    return 0;
}

//Exercicio 4
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

//Exercicio 5
#include <stdio.h>

int main () {
	double n1, n2, n3, n4;
	double soma, media, produto;
	
	printf("Digite seu primeiro valor: ");
	scanf("%lf", &n1);
	printf("Digite seu segundo valor: ");
	scanf("%lf", &n2);
	printf("Digite seu terceiro valor: ");
	scanf("%lf", &n3);
	printf("Digite seu quarto valor: ");
	scanf("%lf", &n4);
	
	
	soma = n1 + n2 + n3 + n4;
	media = soma /4;
	produto = n1	* n2 * n3 * n4;
	
	printf("Soma: %.2lf ", soma);
	printf("Media: %.2lf ", media);
	printf("produto: %.2lf ", produto);
}

//Exercicio 6
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

//Exercicio 7
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

//Exercicio 8
#include <stdio.h>

int main () {
   int tempo, horas, minutos, segundos;
   
   printf("Digite o tempo de duracao do evento em segundos: ");
   scanf("%d", &tempo);
   
   horas = tempo / 3600;
   minutos = (tempo % 3600) / 60;
   segundos = tempo % 60;
   
   printf("%d:%d:%d", horas, minutos, segundos);
   
  return 0;
}

//Exericio 9
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
