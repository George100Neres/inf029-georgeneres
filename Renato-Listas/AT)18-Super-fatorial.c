/* O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais
de N. Assim, o superfatorial de 4 é
sf(4) = 1! * 2! * 3! * 4! = 288
Faça uma função recursiva que receba um número inteiro positivo N e retorne o
superfatorial desse número. */

#include<stdio.h>
#include<stdlib.h>

  int fat(n) {
    if(n == 0) {
        return 1;
    }

    int result = 1;
     while(n > 0){
         result = n * result;
         n--;
     }
      return result;
  } 

    int super(n) {
        if(n == 0) {
            return 1;
        }

         return fat(n)* supfat(n - 1);
    }

     int main() {
         printf("Result fat(%d): %d\n",4 , supfat(4));
           return 0;
     }