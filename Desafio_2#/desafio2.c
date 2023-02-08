/*Resposta Aceita*/
#include<stdio.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main() 
{
    float salarioBase, gratificacao, imposto, salarioFinal;
    scanf("%f", &salarioBase);

    salarioFinal = (salarioBase+(salarioBase * GRATIFICACAO))-(salarioBase * IMPOSTO);
    getchar();

    printf("Salario final: %.2f",salarioFinal);
    return 0;
}
/* Método 2 */
/*
#include<stdio.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main() 
{
    float salarioBase, gratificacao, imposto, salarioFinal;
    scanf("%f", &salarioBase);

    //TODO: Calcule a gratificação, o imposto e o salário final. Em seguida print no console o 
    // salário final.

    getchar();
    return 0;
}
*/