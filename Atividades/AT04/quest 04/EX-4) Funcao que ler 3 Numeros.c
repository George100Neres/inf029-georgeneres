
/* Crie um programa que tenha uma fun��o ler3Numeros. Essa funcao deve ler tr�s numeros e retornar os tr�s numeros
.A Fun��o main deve imprimir esses tr�s n�meros. Utilize vetor para fazer o retorno. */

#include<stdio.h>



#define MAX 3                      /* dimens�o do vetor */

void levetor(int *vet, int dimensao);  /* prot�tipo de levetor */

void main()
{
 int i;
   int vet[MAX];
   levetor(vet, MAX);   /* Para passar um vetor como parametro e' necessario
                           apenas passar o endereco de seu primeiro elemento */

   printf("Os numeros lidos foram \n");
   for (i=0; i<MAX; i++) printf("%d ", vet[i]);
}


void levetor(int *vet,          /* Endereco de inicio do vetor */
             int dimensao )     /* tamanho do vetor */
{
   int i;
   printf("Digite os %d valores a serem armazenados no vetor ", dimensao);
   for (i=0 ; i < dimensao ; i++) scanf("%d",(vet+i));
}
