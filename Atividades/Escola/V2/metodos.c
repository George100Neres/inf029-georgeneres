
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "funcs.h"

int pageHome(int selecao){

  printf("\n*** Menu Projeto Escola ***\n\n");
  printf("1  - Cadastrar Alunos(a)\n");
  printf("2  - Listar Alunos(as)\n");
  printf("3  - Cadastrar Professores(a)\n");
  printf("4  - Listar Professores(a)\n");
  printf("5  - Cadastrar Alunos(a)\n");
  printf("6  - Cadastrar Alunos(a)\n");

  printf("Digite a sua opcao:\n");
  scanf("%d",&selecao);
  setbuf(stdin,NULL);

  return selecao;
}

void cadastrarPessoa(int quantidade, Pessoa cadastro[]) {

int error = 1;

int valideNome; // validaNome
int valideData;   // validaData
int valideCPF;     // validaCPF
int valideSexo;     // validaSexo
int valideMatricula;    // validaMatricula



printf("Informe a matricula:");
fgets(cadastro[quantidade].matricula,TAM,stdin);
setbuf(stdin, NULL);

while(error) {

    valideMatricula = validMatricula(cadastro[quantidade].matricula);

    if(valideMatricula != 1) {


        printf("\nMatricula inválida.Informe novamente:\n");
        fgets(cadastro[quantidade].matricula, TAM, stdin);
        setbuf(stdin,NULL);


    }else {

      break;
    }
}

printf("Informe o nome:\n");
fgets(cadastro[quantidade].nome, TAM, stdin);
setbuf(stdin, NULL);

while(error) {

  valideNome = validNome(cadastro[qauntidade].nome);

  if(valideNome != 1) {

    printf("\n Nome inválido. Informe novamente:\n");
    fgets(cadastro[quantidade].nome, TAM, stdin);
    setbuf(stdin, NULL);

  }else {

     break;
  }
}

printf("Informe o Sexo:\n");
scanf("%c",&cadastro[quantidade].sex);
getchar();


 while(error) {

 valideSexo = validSex(cadastro[quantidade].sex);

  if (valideSex != 1) {

    printf("\n Sexo inválido.Informe novamente:\n");
    fgets(cadastro[quantidade].nome, TAM, stdin);
    getchar();

    }else {
       break;
    }
  }

  printf("Informe a data de nascimento,formato:dd/mm/aaaa \n");
 fgets(cadastro[quantidade].dat_nasc, TAM, stdin);
 setbuf(stdin, NULL);

  while(error) {

    valideData = validData(cadastro[quantidade].dat_nasc,TAM,stdin);

     if(valideData != 1) {

        printf("\n Data inválida. Vá digite novamente:\n");
        fgets(cadastro[quantidade].dat_nasc, TAM,stdin);
        setbuf(stdin, NULL);
     } else {
         break;
     }
  }

  printf("Digite o seu CPF\n");
  fgets(cadastro[quantidade].cpf,TAM, stdin);
  setbuf(stdin, NULL);

  while(error) {

    valideCPF = validCPF(cadastro[quantidade].cpf);

      if(valideCPF ! = 1) {

        printf("\nCPF inválido.Digite novamente\n");
        fgets(cadastro[quantidade].cpf,TAM, stdin);
        setbuf(stdin, NULL);

      }else {
            break;
      }
  }

    printf("\n\n");

}

void listarPessoa(int quantidade, Pessoa cadastro[]);

   if(quantidade < = 0) {

     printf("Cadastro vazio:\n");

   }else {
          for(int i=0; i < quantidade. i++) {

            printf("Matricula: %s\n",cadastro[i].matricula);
            printf("Nome: %s\n",cadastro[i].nome);
            printf("Sexo: %c\n",cadastro[i].nome);
            printf("Sexo: %c\n",cadastro[i].sex);
            printf("Data de nascimento %s\n",cadastro[i].dat_nasc);
            printf("CPF: %s\n",cadastro[i].cpf);


          }
    }
    printf("\n\n");


 void cadastrarDisciplinas(int qtd_professores, int qtd_disciplinas,Disciplina cadastro_disciplinas[],Pessoa cadastro_professores[]) {

  int error = 1;

  int valideNome; // validaNome
  int valideCodigo; // validaCodigo
  int valideProfessor; // validaProfessor
  int valideSemestre; // validaSemestre

   printf("Informe o código:\n");
   fgets(cadastro_disciplinas[quantidade_disciplinas].codigo, TAM, stdin);
   setbuf(stdin, NULL);

   while(error) {

        valideCodigo = validCodigo(cadastro_disciplinas[quantidade_disciplinas].codigo);

        if(valideCodigo != 1) {

             printf("\nCódigo inválido. Favor Informe novamente:\n");
             fgets(cadastro_disciplinas[quantidade_disciplinas].codigo. TAM,stdin);
             setbuf(stdin, NULL);
         }else {
             break;
         }
   }


   printf("Informe o nome:\n");
   fgets(cadastro_disciplinas[quantidade_disciplinas].nome, TAM, stdin);
   setbuf(stdin, NULL);

      while(error) {

       valideNome = validNome(cadastro_disciplinas[quantidade_disciplinas].nome);

          if(valideNome != 1) {

             printf("\nNome inválido. Informe novamente:\n");
             fgets(cadastro_disciplinas[quantidade_disciplinas].nome,TAM,stdin);
             setbuf(stdin, NULL);
          } else {
              break;
          }
      }

   printf("Digite o nome do Professor:\n");
   fgets(cadastro_disciplinas[qtd_disciplinas].professor, TAM, stdin);
 setbuf(stdin, NULL);

 while(error) {

    valideProfessor = validProfessor(qtd_professores,qtd_disciplinas, cadastro_disciplinas[qtd_disciplinas].professor,cadastro_professores[quantidade_professores].nome);

        if(valideProfessor != 1) {

           printf("\n O nome deste Professor nao esta no sistema. Digite novamente");
           fgets(cadastro_disciplinas[qtd_disciplinas].professor, TAM, stdin);

        }else {
            break;
        }
 }


  printf("Indique qual semestre será cadastrado (1 ou 2)\n");
  scanf("%c",&cadastro_disciplinas[qtd_disciplinas].semestre);
    setbuf(stdin, NULL);

    while(error) {

        valideSemestre = validSemestre(cadastro_disciplinas[quantidade_disciplinas].semestre);

        if(valideSemestre != 1 ){
        scanf("%c", &cadastro_disciplinas[qtd_disciplinas].semestre);
        setbuf(stdin, NULL);
      } else {
            break;
       }


   printf("\n\n");
 }
  void listarDisciplinas(int quantidade, Disciplina cadastro[]) {
      if(quantidade < = 0) {

         printf("Cadastro Vazio:\n");
      } else {
          for(int i =0; i < quantidade; i++) {

            printf("Código: %s\n",cadastro[i].nome);
            printf("Professor: %s\n",cadastro[i].professor);
            printf("Semestre: %c\n",cadastro[i].semestre);
          }
      }
      printf("\n\n");
  }
