/* com as seguintes opções: 0 - Sair, 1 - Somar, 2 - Subtrair, 3 - Multiplicar, 4 - Dividir. */

#include <stdio.h>
int main(void)
{
int x=0,y=0;
 float resut=0;
 int op=0;

do{
  printf("0  - Sair\n");
  printf("1  - Somar\n");
  printf("2  - Subtrair\n");
  printf("3  - Multiplicar\n");
  printf("4  - Dividir\n");

  scanf(" %d",&op);
  printf("Digite o primeiro numero:");
  scanf("%d",&x);
  printf("Digite o segundo numero:");
 scanf("%d",&y);

 switch(op){
   case 1:
     resut = x + y;
     break;

   case 2:
     resut = x - y;
     break;

   case 3:
     resut = x * y;
     break;

   case 4:
     resut = x / y;
     break;

   default: // caso se não atender em um dos cases
    printf("\n Digite uma opcao valida!\n");
    break;
   }
  printf("\nO valor resultado e: %f",resut);
  printf("\nDeseja Continuar ?\n(Se Sim,Digite qualquer valor diferente de zero:\n");
  scanf("%d",&op);
}while(op !=0);

 printf("Programa Encerrado!");
}

