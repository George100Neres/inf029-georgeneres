
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define CAD 50 // numeros max de cadastros
typedef struct {

char nome[50];
char cpf[13];
char matricula[20];
int valid;
char data_nasc[10];

} alunos[CAD];  // Vetor tipo Alunos



typedef struct {
char nome[50];
char cpf[13];
char matricula[20];
char data_nasc[10];

} professores[CAD]; // Vetores tipo professores

typedef struct {
char nome[50];
char cod [20]; // codigo
char semst[10]; // semestre
char prof [15];

} disciplinas[CAD];  // Vetor tipo Discplinas

int main(int argc, char const *argv[])
{

 menu();
 return 0;
}

void menu() {

system("cls:");
int op;
*********************************
 do{


printf("\n Digite 1) Cadastrar Aluno:");
printf("\n Digite 2) Cadastrar Disciplinas:");
printf("\n Digite 3)Cadastrar Professores :");
printf("\n Digite 4)Inserir/excluir cadastro :");
printf("\n Digite 0 para Sair!");
scanf("%d", &op);
switch(op){

case 1:
      cadastrar();
    break;
}
  }while(op!=0);

}

void menu();{

}
void cadastrar alunos(){
char nome[50];
char cpf[13];
char matricula[20];
int valid;
int op;
char data_nasc[10];

do {
   for(int i=0; i < CAD; i++) { // Fazer a leitura do cadastro de alunos

  printf("\nDigite o nome do Aluno: ");
  fgets(nome,sizeof(nome),stdin); // Leitura do tamanho da string
  printf("\nDigite o CPF:");
  scanf("%s", &cpf[i].alunos);
  printf("\n Numero da matricula:");
  scanf("%s", &matricula[i].alunos);

   }

  }while()
}
void excluir(){

}
void inserir(){

}
