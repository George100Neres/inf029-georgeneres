
#include<stdio.h>
#include<stdlib.h>

 /* Faça uma função recursiva que permita somar os elementos de um vetor de
inteiros.*/

int som(int v[], int lenght) {

 if(lenght == 0 )
  return 0; // significa que o vetor está vazio.
  else 
   return v[lenght - 1] + som (v, lenght - 1); // ultimo elemento do vetor 10 - 1 = 9
}

 int main() {

   int vetor[9] = [4,2,3,1,6,9,7,5];

 printf("Soma: %d\n", som(vetor,10));// vai somar a quantidade de numeros contido no vetor + 10

  return 0;
 }