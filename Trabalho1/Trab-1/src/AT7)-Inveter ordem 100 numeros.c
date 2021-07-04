
#include<stdio.h>
#include<stdlib.h>

 float invertVet(float vet[], int num) {

     int ax;
     if(num % 2 == 0) {
         ax = 0;
     } else {
         ax = -1;
     }

      float intn(float vet[], int num, int i) {

          if(num == i) {

              return v[num];
          }

          float ax;
          intn(vet, n - 1, i +1);
          ax = vet[num-1];
          vet[num-1] = vet[i+1];
          vet[i+1] = ax;
      }

      return(intn(vet, n, ax));
 }