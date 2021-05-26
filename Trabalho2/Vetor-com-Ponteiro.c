
#include<stdio.h>
#include<stdlib.h>

int n=10;

/* Alocacao Dinamica - Crair um vetor de inteiros utilizando ponteiros. */

 int main(int argc, char **argv) {

     int *vetor;

        vetor = (int*)malloc(sizeof(int*)*n);

        for (int i=0; i< n; i++) {
            printf("Digite um nuemro:");
            scanf("%d",&vetor[i]);
        }

         for (int i=0; i< n; i++) {
            printf("\n%d",vetor[i]);
        }

        return 0;
 }