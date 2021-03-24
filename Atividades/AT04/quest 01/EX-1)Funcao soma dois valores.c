/* Crie um programa que que tenha uma função soma  e a função main. A função main deve ler dois valores,enviar
para a função soma. A função soma deve realizar a soma e retornar o valor. A Função main deve imprimir
o resultado da soma. */

#include<stdio.h>

int soma(int num1, int num2)
{
    int res;
    res = num1 + num2;
    return res;
}

int main(void)
{
 int val1, val2,resultado;

 printf("Digite o primeiro da somavalor:");
 scanf("%d",&val1);
 printf("Digite o segundo da soma valor:");
 scanf("%d",&val2);
resultado =  soma (val1,val2); //chamada da função 

 printf("Resultado = %d\n",resultado);
}
