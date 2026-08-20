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
