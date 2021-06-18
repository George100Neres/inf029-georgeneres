
 #include<stdio.h>
 #include<stdlib.h>

  /*Crie um programa em C que receba um vetor de números reais com 100 elementos.
Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.*/

int main() {

    int i, op;
    float vet[100];

    for(i =0; i< 100; i++) {
        printf("Digite o valor da posição %d: ",i);
        scanf("%f", &vet[i]);
    }

    do{

    printf("\n0 - Finalizar\n1 - Imprimir vetor\n2 - Imp. vetor invertido\n");
     scanf("%d", op);

    switch(op) {
     case 0:
         printf("Finalizando...\n");
         break;
    case 1:
         for(i =0; i <100; i++) {
             printf("%.2f", vet[i]);
         }   

        printf("\n");
        break;
    case 2:
         for(i = 100; i >=0; i--) {
             printf("%.2f", vet[i]);
         }
         printf("\n");
         break;
    default:
        printf("Opcao invalida!\n");

     }
    }while(op != 0);

}