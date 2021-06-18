
#include<stdio.h>
#include<stdlib.h>

/* Faça uma função recursiva que receba um número inteiro positivo N e imprima
todos os números naturais de 0 até N em ordem crescente. */

 int naturais(int n, int y) {
  
   if(n > y) {
       return naturais(n,y);
   }
     else {
         return 0;
     }
 }

  int main() {
      int n,y =0;
      printf("Digite um numero:\n");
      scanf("%d", &n);
      naturais(n,y);
      return 0;
  }