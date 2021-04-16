
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include "funcs.h"

int MenuPrinc(int escolha) { // menuPrincipal

      printf("*************************\n");
      printf("*********************************\n");
      printf("*************** PROJETO ESCOLA **************************\n");
      printf("******************************************************\n");

      printf("*********************** ALUNOS ********************************\n" );
      printf("---------------------------------------------------------\n");
      printf("1. Cadastrar***************************\n ");
      printf("2. Matricular*****************************\n ");
      printf("3. Remover***********************************\n ");
      printf("4. Atualizar******************************\n ");
      printf("5. Trancar*******************************\n ");
      printf("6. Cadastrar****************\n ");


      printf("*************************** PROFESSORES *******************************\n");
      printf("6. Cadastrar****************\n ");
      printf("7. Remover****************\n ");
      printf("8. Atualizar****************\n ");

       printf("*********************** DISCIPLINAS ********************************\n" );
       printf("9. CADASTRAR ***************************\n");
       printf("10.REMOVER****************\n ");
      printf("11. Atualizar****************\n ");



       printf(" ****************************RELATORIOS DE ALUNOS    ****************\n ");
       printf("12* Listar Alunos(as)");
       printf("13- Listar Alunos por sexo:");
       printf("14- Listar Alunos por nascimento:");
       printf("15- Listar Alunos por nascimento");
       printf("16- Lista de Alunos em menos de 3 disciplinas");

       printf("**********************************************************************\n");

        printf(" ****************************RELATORIOS DE PROFESSORES  ****************\n ");

        printf("17- Listar Professores*** ");
        printf("18- Listar Professores por sexo***");
        printf("19- Listar Professores por ordem alfabetica *******");
        printf("20-Listar Professores por data de nascimento");

        printf(" ****************************RELATORIOS DE DISCIPLINAS  ****************\n ")

        printf("21- Listar Disciplinas");
         printf("22- Listar Disciplinas e alunos matriculados:");
         printf("23-Lista de Disciplinas com mias de 40 vagas");

         printf("24-Aniversariante do mês**:");
         printf("25- Procurar alunos ou professores no sistema: ");

         printf("26- Sair**************");

         scanf("%d",&escolha);
         setbuf(stdin, NULL);

         return escolha;


 }


 int main(){

    Pessoa cadastro_alunos[TAM];
    Pessoa cadastro_professores[TAM];
   Disciplina cadastro_disciplinas[TAM];
   Pessoa_tempor cadastro_alunos_tempor[TAM];
   Pessoa_tempor cadastro_professores_tempor[TAM];

   int qtd_alunos =0;
   int qtd_professores =0;
   int qtd_disciplinas = 0;

   int escolha = 0;
   int true = 1;

   while(true){

     escolha = MenuPrinc(escolha);

      switch(escolha) {

        case 1:{

              if(qtd_alunos < TAM) {

                printf("\n***** Cadastre um perfil******\n\n");
                cadastrarPessoa(atd_alunos, cadastro_alunos);
                printf("Cadastro realizado:");
                qtd_alunos++;
                break;
              }else {
                   printf("Turma cheia.\n");
                   break;
              }
        }

         case 2:{

        if(qtd_alunos < TAM) {

            printf("Vms matricular um aluno:\n");
           matricularAlunoDisciplinas(qtd_disciplinas, cadastro_disciplinas. qtd_alunos,cadastro_alunos);
           printf("Matricula Realizada:");
            break;
         } else{

            printf("Erro ao realizar o cadastro:");
            break;
         }
      }

      case 3:{

         if(qtd_alunos > 0) {

            printf("\n***** Remova um perfil ******\n\n");
            removerPessoa(qtd_alunos, cadastro_alunos);
            printf("**** Remoçao realizada com sucesso.\n");
            break;

      }else {

         printf("Não foi possivel remover o discente.");
         break;
      }
   }


    case 4:{

       if(qtd_alunos > 0) {


        printf("\n******** Atualize um perfil ************\n\n");
        alterarPessoa(qtd_alunos, cadastro_alunos);
        printf("******** Atualizaçao realizada com sucesso\n");
        break;
     }else{

         printf("Nao foi possivel atualizar o perfil.");
          break;
     }
   }

   case 5:{

       if(qtd_alunos > 0) {
      printf("\n O aluno deve trancar uma matricula **\n");
      removerAlunoDisciplinas(qtd_disciplinas, cadastro_disciplinas);
      printf("Atualizacao realizada\n:");
      break;
 }else{

    printf("Nao foi possivel realizar o trancamento da disciplina");
     break;
    }
 }

  case 6: {

     if(qtd_professores < TAM){
    printf("Cadastro realizado:\n");
    qtd_professores++;
    break;
     }else{
        printf("Desculpe! Vagas esgotadas.\n");
        break;
     }
  }

  case 7:{

     if(qtd_professores > 0){

        printf("\n******** Remova um perfil ***********\n");
        removerPessoa(qtd_professores, cadastro_professores);
        printf(" Remoção realizada com sucesso:");
         break;
     }else{
         printf("Nao foi possivel remover o docente");
          break;
     }
  }

    case 8:{

     if(qtd_professores > 0){
       printf ("\n ****** Atualize um perfil ********\n");
     alterarPessoa(qtd_professores, cadastro_professores);
     printf("Atualizacao realizada com sucesso:\n");
     break;

     }else{
        printf("Perfil nao atualizado.");
          break;
     }
  }

  case 9:{

    if(qtd_disciplinas < TAM){

        cadastrarDisciplinas(qtd_professores, qtd_disciplinas, cadastro_disciplinas, cadastro_professores);
        printf("Cadastro realizado \n");
       qtd_disciplinas++;
       break;
    }else {
           printf("Limite maximo:");
           break;
    }
  }

  case 10:{

  if(qtd_disciplinas > 0) {

        printf("\n **** Remova uma disciplina **** \n");
        removerDisciplinas(qtd_disciplinas, cadastro_disciplinas);
        printf("Remocao realizada com sucesso!");
        break;

      }else{

            printf("A remocao da disciplina nao foi realizada");
            break;
      }
  }

  case 11:{

   if(qtd_disciplinas > 0){

   printf("\n *** Atualize uma disciplina******");
   alterarDisciplinas(qtd_disciplinas, cadastro_disciplinas, qtd_professores);
   printf("Atualizacao realizada com sucesso:\n");
   break;

    }else{
       printf("Perfil nao atualizado:");
       alterarDisciplinas(qtd_disciplinas, cadastro_disciplinas,qtd_professores);
       printf("Atualizacao realizada com sucesso:\n");
    }
  }

  case 12:{

      printf("***** List (all) Alunos*******\n");
      listarPessoa(qtd_alunos,cadastro_alunos);
      break;
  }

   case 13:{

       printf("\n ************** Lista sexo (all) Alunos************\n");
       listarPessoaSexo(qtd_alunos, cadastro_alunos);
       break;
   }

   case 14:{

       printf("\n******** Lista por nome- (all)Alunos *******\n");
       listarPessoaPorNome(qtd_alunos, cadastro_alunos, cadastro_alunos_tempor);
       break;
   }

   case 15:{

        printf("\n ******** Lista por data de nascimento - (all)Alunos *****\n");
        listarPessoaSorteioPorData(qtd_alunos, cadastro_alunos, cadastro_alunos_tempor);
        break;
   }

   case 16:{

        printf("\n ********* Lista de alunos em menos de 3 disciplinas******\n");
        listarAlunoEmMaisDe1Disciplinas(qtd_disciplinas, cadastro_disciplinas,cadastro_alunos,qtd_alunos);
        break;
   }
   case 17:{

      printf("\n*************************** Lista geral - Professores(as) *******************\n");
      listarPessoa(qtd_professores,cadastro_professores);
      break;
   }

   case 18: {

				printf("\n*** * * * * ** * * *  Lista por sexo - Professores(as) * * * * * * * * * * ** ** * *\n\n");
				listarIndividuoSexo(qtd_professores, cadastro_professores);
				break;
   }

   case 19: {

            printf("\n************ Lista por nome - (all)Professores * * ** * * ** ");
            listarPessoaPorNome(qtd_professores, cadastro_professores, cadastro_professores_tempor);
            break;
    }

   case 20: {

            printf("\n*** * * * * * ** * * * * * ** *Lista por data de nascimento - Professores(as) ********************\n\n");
            listarPessoaSorteioPorData(qtd_professores, cadastro_professores, cadastro_alunos_tempor);
            break;
   }

   case 21:{

            printf("********** ** * * Lita geral - Disciplinas ***************\n\n");
            listarDisciplinas(qtd_disciplinas, cadastro_disciplinas);
            break;
   }
   case 22:{

            printf("***************** Lista de alunos (all) matriculados *****************\n");
            listarAlunoDisciplinas(qtd_disciplinas, cadastro_disciplinas, qtd_professores, cadastro_professores);
            break;
   }

   case 23:{

            printf("\n ************** Lista de Disciplinas com mias de 40 vagas ****************\n");
            listarAlunoDisciplinasMaisde50Vagas(qtd_disciplinas, cadastro_disciplinas, qtd_professores, cadastro_professores);
            break;
   }

   case 24:{

            printf("\n**************** Aniversariantes do mês *********************\n\n");
            listarAniversarios(qtd_alunos, cadastro_alunos, qtd_professores, cadastro_professores);
   }

   case 25: {

				printf("\n*** * * * * ** *  * **** Procurar **************************\n\n");
				listarProcuraNome(qtd_alunos, cadastro_alunos, qtd_professores,cadastro_professores);
				break;
    }

    case 26:{

				printf("Saindo.... . . .. . ......");
				true = 0;
				break;

     }

     default:{

         printf("\nOpcao nao valida:");
         break;
      }
     }
   }
  return 0;
 }
