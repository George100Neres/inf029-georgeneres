 #include<stdio.h>
  #include<stdlib.h>

   void decbin2(int dec);

 int main() {
     int dec;
     printf("Digite um numero inteiro:");
     scanf("%d", &dec);
     printf("Resultado:");
     decbin2(dec);
     return 0;
 }

  void bindec2(int dec) {
      int n;
      if(dec/2 != 0){
          n = dec/2;
          decbin2(n);
          printf("%d",dec%2);

      }
       else {
           printf("%d", dec%2);
       }
  }