#include<stdio.h>
#include<stdlib.h>

 void imprimeSomaNumeros(int n);

  int main() {
     int num = 5;
     int som = somNumeros(num);
     printf("%d\n",som);
     //imprimeSomaNumeros(&n);
  }

   int somNumeros(int num){
       if(num == 1)
       return 1;
       return num + somNumeros(num-1);
   }

   // num = 2
    void imprimeSomNumeros(int *num) {
        int som = *num;
        if(num > 0) {
            *num = *num - 1;
        imprimeSomNumeros(som + *num);

        } else {
            printf("%d",som);
        }
    }