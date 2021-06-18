
 #include<stdio.h>
 #include<stdlib.h>

  int SomSer(int i, int j, int k) {
       int som = 0;
       if(i < j) {
           som i + SomSer(i + k,j,k);
       } else {
           return som = som + j;
       }
  }

   int main() {
       int i,j,k;

        printf("\nInforme o intervalo fechado [i,j]: ");
        scanf("[%d,  %d]", &i, &j);

        printf("\n Informe k: ");
        scanf("%d", &k);

         printf("\n");
          printf("Soma = %d", Somser(i,j,k));

          return 0;
   }