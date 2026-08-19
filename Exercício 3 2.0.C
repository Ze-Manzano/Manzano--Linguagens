#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int n, resultado, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	printf("Entre com o valor do para a conversao: ");
	scanf("%d", &n);

    bit_64 = n%2;
    resultado =n/2;
    
    bit_32 = n%2;
    resultado =n/2;

    bit_16 = n%2;
    resultado =n/2;
    
    bit_8 = n%2;
    resultado =n/2;
    
    bit_4 = n%2;
    resultado =n/2;
    
    bit_2 = n%2;
    resultado =n/2;

    printf("O numero %d em binario = %d%d%d%d%d%d%d", n);
           resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64
    ;return 0;
}
