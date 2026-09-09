#include <stdio.h>
#include <stdlib.h>
#include <math.h>


	
int main(int argc, char *argv[]) {
	
	int numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, numero10, numero11, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, soma1, multi1, valor1;
	
	printf("DIGITE SEU CPF:\n");
	scanf("%d%d%d%d%d%d%d%d%d", &numero1, &numero2, &numero3, &numero4, &numero5, &numero6, &numero7, &numero8, &numero9, &numero10, &numero11);
	

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
	
	printf("Primeiro digito verificador: %d\n", valor1);
	
	
return 0;
	
}
