

/* Cire um programa que tenha uma função de ler4Numeros. Essa função deve ler quatro números do usuario e retornar os
quatros numeros. A funcao main deve imprimir esses quatro numeros.Use o struct  para fazer o retorno.
*/

#include<stdio.h>

struct Leitura {

int num1;
int num2;
int num3;
int num4;

}; // Obrigatorio ponto e vírgula.

struct Leitura usuario()
{

  struct Leitura Ltr;
 printf("Insira o Primeiro Numero:");
 scanf("%d", &Ltr.num1);
  printf("Insira o Segundo Numero:");
 scanf("%d", &Ltr.num2);
  printf("Insira o Terceiro Numero:");
 scanf("%d", &Ltr.num3);
 printf("Insira o Quarto Numero :");
 scanf("%d", &Ltr.num4);

 return Ltr;

};

void imprimir (struct Leitura Ltr)
{

    printf("Numero Digitados pelo usuario:\n");
    printf("Primeiro digito: %d\n",Ltr.num1);
    printf("Segundo digito: %d\n",Ltr.num2);
    printf("Terceiro digito: %d\n",Ltr.num3);
    printf("Quarto digito: %d\n",Ltr.num4);
}

int main()
{

    struct Leitura Ltr1,Ltr2,Ltr3,Ltr4;
    Ltr1= usuario(); // Chamada Da Função

    imprimir(Ltr1);



    getch();


}
