
#include<stdio.h>
#include<stdlib.h>

// 
int troco(int valor, int moedas[], int m){
    int res =0;
  // varrer todas as moedas da maior para a menor
  for(i =0; i < m; i++) {
      while(valor >= moedas[i]) {
           res++; // vai contabilizar a moeda
           valor -= moedas[i]; // descontar o valor dessa moeda
      }
  }
  return res; // vai retorna o melhor otrco
} 

 int main(int argc, char *argv[]) {
     int moedas[] = {25,10,5,1};
     int m =4;
     int valor = atoi(argv[1]);
     int t = troco(valor, moedas,m);
     printf("troco para %d com %d moedas\n",valor,t);
 }