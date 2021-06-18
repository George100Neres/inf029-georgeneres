
 #include<stdio.h>
 #include<stdlib.h>

  int decr(int n, int lista) {
      printf("%d\n",lista);

      if(n>lista && lista %2 == 0) {
          return decr(n - 2,lista);
      }else {
          return 0;
      }
  }

   int main(void) {
       int n;
       int lista = 0;
       printf("Digite um numero:\n");
       scanf("%d", &n);

       decr(n,lista);

       return 0;
   }