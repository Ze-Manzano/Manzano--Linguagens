#include <stdio.h>
#include <math.h>

int main() {

    // 1) Ano de nascimento
    int idade, anoAtual;
    printf("Exercicio 1 - Digite sua idade e o ano atual: ");
    scanf("%d %d", &idade, &anoAtual);
    printf("Ano de nascimento: %d\n\n", anoAtual - idade);

    // 2) Km/h para m/s
    float kmh;
    printf("Exercicio 2 - Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
    printf("Velocidade em m/s: %.2f\n\n", kmh / 3.6);

    // 3) Reais para dólares
    float reais, cotacao;
    printf("Exercicio 3 - Digite o valor em reais e a cotacao do dolar: ");
    scanf("%f %f", &reais, &cotacao);
    printf("Valor em dolares: %.2f\n\n", reais / cotacao);

    // 4) Celsius para Fahrenheit
    float celsius;
    printf("Exercicio 4 - Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    printf("Temperatura em Fahrenheit: %.2f\n\n", celsius * (9.0/5.0) + 32);

    // 5) Graus para radianos
    float graus;
    printf("Exercicio 5 - Digite o angulo em graus: ");
    scanf("%f", &graus);
    printf("Angulo em radianos: %.2f\n\n", graus * 3.141592 / 180);

    // 6) Antecessor e sucessor
    int num;
    printf("Exercicio 6 - Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Antecessor: %d | Sucessor: %d\n\n", num - 1, num + 1);

    // 7) Divisão do prêmio
    float premio = 780000;
    float p1 = premio * 0.46;
    float p2 = premio * 0.32;
    float p3 = premio - (p1 + p2);
    printf("Exercicio 7 - Premios:\n");
    printf("Primeiro: %.2f\nSegundo: %.2f\nTerceiro: %.2f\n\n", p1, p2, p3);

    // 8) Tempo em horas:minutos:segundos
    int tempo, horas, minutos, segundos;
    printf("Exercicio 8 - Digite o tempo em segundos: ");
    scanf("%d", &tempo);
    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;
    printf("%d:%d:%d\n\n", horas, minutos, segundos);

    // 9) Consumo de combustível
    float tempoViagem, velocidade, distancia, litros;
    printf("Exercicio 9 - Digite o tempo (h) e velocidade media (km/h): ");
    scanf("%f %f", &tempoViagem, &velocidade);
    distancia = tempoViagem * velocidade;
    litros = distancia / 12.0;
    printf("Litros gastos: %.3f\n\n", litros);

    // 10) Maior de três números
    int a, b, c, maior;
    printf("Exercicio 10 - Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
