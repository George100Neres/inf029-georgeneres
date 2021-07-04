
#include<stdio.h>
#include<stdlib.h>

/* Sequencia Fibonacci
Tn+2 = Tn1+1 + Tn
Tn = T(n -2) + T(n-1)
T1 = 1
T2 = 1
(1,1,2,3,5,8) SOma dos anteriores pelos sucessores.
n = 1 .. T1+2 = T1+1 + T1 = T3 = T2 + T11 + 1 = 2 
n = 2 .. T4 = T3 + T2 = 2 + 1 = 3 
n = 3 .. T5 = T4 + T3 = 3 +2 = 5*/



 int main(){

     int n,i;
     printf("Informe a quantidade de termos da sequencia de fibonacci: ");
    scanf("%d", &n);
     return 0;
   
        printf("O valor do fibonacci e: %d",n);
    }
    
    return 0;
 }
  int fibonacci(int n){
      if(n<0) {
          return -1;
      } else if (n==1 || n== 2) {
          return 1;
      }else {
          return fibonacci(n-2) + fibonacci(n-1);
      }
  }


