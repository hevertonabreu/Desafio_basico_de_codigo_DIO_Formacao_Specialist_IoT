/*Resposta Aceita*/
#include<stdio.h>

int main() {
    float precoFabrica, lucro, impostos, precoFinal;
    float percentualLucro, percentualImpostos;

    scanf("%f", &precoFabrica);
    scanf("%f", &percentualLucro);
    scanf("%f", &percentualImpostos);

    lucro = (precoFabrica*(percentualLucro/100));
    impostos = (precoFabrica*(percentualImpostos/100));
    precoFinal = (precoFabrica+(precoFabrica*(percentualLucro/100)))+(precoFabrica*(percentualImpostos/100));
    getchar();

    printf("Lucro: R$ %.2f",lucro);
    printf("\nImpostos: R$ %.2f",impostos);
    printf("\nPreco final: R$ %.2f",precoFinal);

    return 0;
}