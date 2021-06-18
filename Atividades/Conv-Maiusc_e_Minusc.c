#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
  
  // Procedimento que converte uma string para maiusculo

 void maiusculo(char s1[], char s2[]) {
   
   int i = 0;
   while(s1[i] != '\0') {

    s2[i] = toupper(s1[i]); // str2[i] esta recebendo a conversao do caractere maiusculo do str1[i]
    i++;
    }
    // Copiando os caracteres convertidos do caracteres str2[i]
    s2[i] = '\0';
 }
//   // Procedimento que converte uma string para minusculo
void minusculo(char s1[], char s2[]) {
   
   int i = 0;
   while(s1[i] != '\0') {

    s2[i] = tolower(s1[i]); // str2[i] esta recebendo a conversao do caractere minusculo do str1[i]
    i++;
    }
    // Copiando os caracteres convertidos do caracteres str2[i]
    s2[i] = '\0';
 }

int main() {

   // strupr(); // Converte a string para maiusculo
    //strlwr(); // Converte a string para minusculo

   char str1[] = "Ola Bom Dia";
   char str2[50];
 // chamada do procedimento

 printf("%s\n",str1);

  maiusculo(str1, str2);
 printf("%s\n",str2); // string convertida maiuscula

 minusculo(str1, str2); 
 printf("%s\n",str2);
    return 0;
}