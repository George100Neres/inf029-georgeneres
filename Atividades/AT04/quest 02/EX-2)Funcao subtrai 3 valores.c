
/* Cire um programa que tenha uma função subtrai e a função main.A função main deve ler três valores ,
enviar para a função subtrai.A função subtrai deve realizar a subtracao dos três valores (primeiro menos
o segundo o terceiro)e retornar o valor.A Função main deve imprimir o resultado da subtração.

*/
#include<stdio.h>

int subtrai(int num1,int num2,int num3)
{
  int resut;
  resut = num1 - num2 - num3;
  return resut;
}

int main(void)
{
 int val1,val2,val3,resultado;

printf("Digite o primeiro valor da subtracao:");
 scanf("%d",&val1);
 printf("Digite o segundo valor da subtracao:");
 scanf("%d",&val2);
  printf("Digite o terceiro valor da subtracao:");
 scanf("%d",&val3);

 resultado = subtrai(val1,val2,val3); // chamada da função

printf("Resultado = %d\n",resultado);
}