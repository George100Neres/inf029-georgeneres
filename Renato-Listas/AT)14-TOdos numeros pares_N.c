
#include<stdio.h>
#include<stdlib.h>

 int naturais(int n, int y) {
      printf("%d\n",y);

    if(n > y) {
        return naturais(n,y + 1);
    }
    else {
        return 0;
    }
 }

  int main() {
      int n, y =0;
  printf("Digite um numero:\n");
   scanf("%d",&n);
   naturais(n,y);
   return 0;
   
  }