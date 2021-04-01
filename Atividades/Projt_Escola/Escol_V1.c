
/* Desenvolver um programa em C que controle o funcionamento de uma Escola. Existem diversas
funcionalidades em uma Escola, mas você deve focar no que é pedido. Caso tenha interesse você
pode evoluir sua solução para adicionar mais funcionalidades.
Funcionalidades solicitadas:
• Cadastro de Alunos (Matrícula, Nome, Sexo, Data Nascimento, CPF) .
• Cadastro de Professores (Matrícula, Nome, Sexo, Data Nascimento, CPF).
• Cadastro de Disciplinas (Nome, Código, Semestre, Professor)
◦ Inserir/Excluir aluno de uma disciplina
• Relatórios
◦ Listar Alunos
◦ Listar Professores
◦ Listar Disciplinas (dados da disciplina sem os alunos)
◦ Listar uma disciplina (dados da disciplina e os alunos matriculados)
◦ Listar Alunos por sexo (Masculino/Feminino)
◦ Listar Alunos ordenados por Nome
◦ Listar Alunos ordenados por data de nascimento
◦ Listar Professores por sexo (Masculino/Feminino)
◦ Listar Professores ordenados por Nome
◦ Listar Professores ordenados por data de nascimento

◦ Aniversariantes do mês
◦ Lista de pessoas (professor/aluno) a partir de uma string de busca. O usuário informa no
mínimo três letras e deve ser listado todas as pessoas que contem essas três letras no
nome.
◦ Lista de alunos matriculados em menos de 3 disciplinas
◦ Lista de Disciplinas, com nome do professor, que extrapolam 40 vagas.
Observação:
• Por Cadastro entenda Incluir, excluir, atualizar
• Valide todos os campos necessários (ex. Data nascimento, CPF) */

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

