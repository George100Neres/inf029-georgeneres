/* Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número
.Esta função deve ainda verificar se é possível calcular o fatorial,se não for,ela deve de alguma forma
retornar para a main que deu algum erro.A função main deve solicitar o valor do usuário e imprimir o fatorial
dele,ou se não é possível calcular o fatorial. */

#include<stdio.h>
#include<stdlib.h>

int fatorial (int n) {

 if(n == 1 || n == 0)
 
     return 1;
  if(n < 0)

  printf("Nao e possivel efetuar com numero negativos!");
  else 
    return n * fatorial(n - 1);

}

void main()
{
  int n;
  printf("Digite um numero:");
  scanf("%d",&n);

  printf("Fatorial de  %d: %d\n",n,fatorial(n));
  fatorial(n);   //chamada da função
}