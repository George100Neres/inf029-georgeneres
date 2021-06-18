#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* /*46) Faça uma função recursiva que permita calcular a média um vetor de tamanho N.*/

#include <stdio.h>
int entrada(int *vet, int n);
void imprimir(int *vet, int n);
float media(int *vet, int n,int );
main(){
    int *vet, n, j=0;
    float md;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (int *)malloc(n*sizeof(int));

    if(!vet){
        printf("Problemas com a alocação de memória.\n");
        exit(1);
    }
    entrada(vet, n);
    imprimir(vet,n);

    md=media(vet, n, j);

    printf("\n\nA media do vetor e de %f.", md);
}
int entrada(int *vet, int n){
    int i;
    printf("Entre com os valores do vetor.\n");
    for(i=0;i<n;i++){
        printf("Vetor [%d]: ", i);
        scanf("%d", &vet[i]);
    }
}
void imprimir(int *vet, int n){
    printf("\n\nO vetor é o seguinte.\n");
    int i;
    for(i=0;i<n;i++){
        printf("Vetor [%d]: %d.\n", i, vet[i]);
    }
}
float media(int *vet, int n , int j){
    float somar=0, i=0;

    /*for(i=0;i<n;i++){
        somar += (*vet)++;
    }
    somar=somar/n;
    return somar;*/

   if(n==1){
        return vet[0]/n;
   }
   else{
        return (media(vet, n-1,j+1)+vet[j]/n);
   }
}