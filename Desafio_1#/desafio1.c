/*Resposta Aceita*/
#include<stdio.h>

int main(void)
{
  int a, b, c, media;
  
  scanf("%i",&a);
  scanf("%i",&b);
  scanf("%i",&c);
  

  media = (a + b + c) / 3;
  getchar();
  
  printf("Media = %.1i.00",media);
  return 0;  
}

/* Método 2 */
/*
#include<stdio.h>   //Biblioteca padrão para entrada/saída de dados.
#include<stdlib.h>  //Biblioteca básica padrão para funções/constantes de uso geral.
#include<conio.h>   //Biblioteca console de entrada/saída usada em DOS para função Getchar.

int main(void)
{
  //Declaração das variáveis
  int a, b, c, media;
  
  //Entrada de dados
  printf("\n Ola Professor Albert, por favor digite a primeira nota do aluno: ");
  scanf("%i",&a);
  system("cls"); // limpar a tela
  printf("\nPronto, registrei a nota '%i' como primeira nota!\n",a);
  
  printf("\nAgora, por favor digite a segunda nota: ");
  scanf("%i",&b);
  system("cls"); // limpar a tela
  printf("\nPronto, registrei a nota '%i' como segunda nota!\n",b);

  printf("\nAgora, por favor digite a terceira nota: ");
  scanf("%i",&c);
  system("cls"); // limpar a tela
  printf("\nPronto, registrei a nota '%i' como terceira nota!\n",c);
  
  //TODO: Processamento usando a formula da média aritmética: x=x1+x2+x3...xn/n, exibindo no console Getchar
  media = getchar();
  media = (a + b + c) / 3;
  
  //Saída, o resultado da média aritmética
  printf("\nEsse aluno obteve uma Media = %.1i.00!\n",media);
  
  system("pause");  //pausa da tela somente para Windows
  return 0; //retorno da função main  
}
*/