
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "funcs.h"

Pessoa cadastro_alunos[TAM];
Pessoa cadastro_´rofessores[TAM];
Disciplina cadastro_disciplinas[TAM];

int qtd_aluns = 0;
int qtd_professores = 0;
int qtd_disciplinas = 0;

int selecao = 0;
int pont = 1;

while(pont == 1) {

    selecao = pageHome(selecao);

    switch(selecao) {

    case 1:{

    if(qtd_aluns < TAM) {

        cadastrarPessoa(qtd_aluns,cadastro_alunos);
        printf("Cadasrto Realizado:");
        qtd_aluns++;
        break;
        }else{
           printf("Turma cheia:");
           break;
         }
     }

     case 2:{
        printf("\n*/*******Alunos cadastrados com Sucesso!*****\n");
        listarPessoa(qtd_aluns,cadastro_alunos);
        break;
     }

     case 3:{

				if(quantidade_professores < TAM){

					cadastrarIndividuo(qtd_professores, cadastro_professores);
					printf("Cadastro realizado\n");
					qtd_professores++;
					break;

				}else{

                    printf("Não temos mais vagas.\n");
					break;

				}
    }

    case 4:{

			printf("\n********** Professores Cadastrados com Sucesso ************\n\n");
			listarIndividuo(qtd_professores, cadastro_professores);
			break;

			}

    case 5:{

				if(qtd_disciplinas < TAM){

					cadastrarDisciplinas(qtd_professores, qtd_disciplinas, cadastro_disciplinas, cadastro_professores);
					printf("Cadastro realizado\n");
					quantidade_disciplinas++;
					break;
    case 6:{

				printf("\n**********Disciplinas cadastradas com sucesso************\n\n");
				listarDisciplinas(qtd_disciplinas, cadastro_disciplinas);
				break;

			}

    default:{
				printf("\nOpção nao  valida\n");
				break;
			}
    }
   }
   return 0;
}
