#include <stdio.h>
#include <stdlib.h>
#include <math.h>


	
int main(int argc, char *argv[]) {
	
	int numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, numero10, numero11, v1, v2, v3, v4, v5, v6, v7, v8, v9, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, soma1, multi1, valor1, soma2, multi2, valor2;
	
	printf("DIGITE OS 9 PRIMEIROS NUMEROS DO CPF SENDO OS NUMEROS ESPACADOS:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d", &numero1, &numero2, &numero3, &numero4, &numero5, &numero6, &numero7, &numero8, &numero9, &numero10, &numero11);
	

	v1 = numero1 * 10;
	v2 = numero2 * 9;
	v3 = numero3 * 8;
	v4 = numero4 * 7;
	v5 = numero5 * 6;
	v6 = numero6 * 5;
	v7 = numero7 * 4;
	v8 = numero8 * 3;
	v9 = numero9 * 2;

	soma1 = v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9;
	multi1 = soma1 * 10;
	valor1 = multi1 % 11;
	
	if (valor1 == 10) valor1 = 0;
	
	printf("Primeiro digito verificador: %d\n", valor1);
	
	v11 = numero1 * 11;
	v12 = numero2 * 10;
	v13 = numero3 * 9;
	v14 = numero4 * 8;
	v15 = numero5 * 7;
	v16 = numero6 * 6;
	v17 = numero7 * 5;
	v18 = numero8 * 4;
	v19 = numero9 * 3;
	v20 = numero10 * 2;
	

	soma2 = v11 + v12 + v13 + v14 + v15 + v16 + v17 + v18 + v19 + v20;
	multi2 = soma2 * 10;
	valor2 = multi2 % 11;
	
	if (valor2 == 10) valor2 = 0;
	
	printf("Primeiro digito verificador: %d\n", valor2);
	
	
	
	
return 0;
	
}
