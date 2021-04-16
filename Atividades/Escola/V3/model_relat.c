
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include "funcs.h"

void listarPessoa(int quantidade, Pessoa cadastro[]) {

    if(quantidade <= 0){

        printf("Cadastro Vazio.\n");
    }else {
         for(int i = 0; i < quantidade; i ++){

            printf("Numero: %d\n", i + 1);
            printf("Matricula: %s\n",cadastro[i].matricula);
            printf("Nome: %s\n",cadastro[i].nome);
            printf("Sexo: %c\n",cadastro[i].sex);
            printf("Data de nascimento %s\n", cadastro[i].data_nasc);
            printf("CPF: %s\n",cadastro[i].cpf);
         }
    }

    printf("\n\n");

}

void listarPessoaSexo(int quantidade, Pessoa cadastro[]){

   if(quantidade < = 0){

      printf("Cadastro vazio.\n");
   }else{

         printf("Lista de alunos:");
         for(int i=0; i < quantidade; i++) {

            if(cadastro[i].sex == 'm' || cadastro[i].sex == 'M'){

                printf("Numero: %d\n",i + 1);
                printf("Matricula: %s\n",cadastro[i].matricula);
                printf("Nome %s\n",cadastro[i].nome);
                printf("Sexo: %c\n",cadastro[i].sex);
                printf("Data de nascimento %s\n",cadastro[i].data_nasc);
                printf("CPF. %s\n",cadastro[i].cpf);

            }
         }
    printf("\n");

    printf("Lista de alunos");
    for(int i=0; i < quantidade; i++) {

        if(cadastro[i].sexo == 'f' || cadastro[i].sexo == 'F'){


        printf("Numero: %d\n", i+1);
        printf("Matricula: %s\n",cadastro[i].matricula);
        printf("Nome: %s\n", cadastro[i].nome);
        printf("Sexo: %c\n",cadastro[i].sex);
        printf("Data de nascimento %s\n",cadastro[i].data_nasc);
        printf("CPF: %s\n",cadastro[i].cpf);
        }
      }

      printf("Lista de alunos:");

      for(int i = 0; i < quantidade; i++){

          if(cadastro[i].sex == 'f' || cadastro[i].sex == 'F'){

            printf("Numero: %d\n", i +1);
            printf("Matricula: %s\n",cadastro[i].matricula);
            printf("Nome: %s\n",cadastro[i].nome);
            printf("Sexo: %c\n",cadastro[i];sex);
            printf("Data de nascimento %s\n",cadastro[i].dat_nasc);
            printf("CPF: %s\n",cadastro[i].cpf);
          }
      }

      printf("Lista de Alunos");
      for(int i = 0; i < quantidade; i++) {

          if(cadastro[i].sex == 'o' || cadastro[i].sex == '0') {

            printf("Numero: %d\n", i + 1);
            printf("Matricula: %s\n",cadastr[i].matricula);
            printf("Nome: %s\n",cadastro[i].nome);
            printf("Sexo: %c\n",cadastro[i].sex);
            printf("Data de nascimento %s\n",cadastro[i].data_nascimento);
            printf("CPF: %s\n",cadastro[i].cpf);
          }
      }
   }
}

void listarPessoaPorNome(int quantidade, Pessoa cadastro[], Pessoa_tempor cadastro_tempor[]){

      for(int i = 0; i < quantidade; i++){

      strcpy(cadastro_tempor[i].nome_tempor, cadastro[i].nome);
      strcpy(cadastro_temp[i].matricula_tempor, cadastro[i].matricula);
      cadastro_tempor[i].sexo_tempor = cadastro[i].sexo;
      strcpy(cadastro_tempor[i].dat_nasc_tempor, cadastro[i].dat_nasc);
      strcpy(cadastro_temp[i].cpf_tempor, cadastro[i].cpf);

  }

  if(quantidade <= 0){

   printf("Cadastro Vazio.\n");
  }else {

       char tempor_string[TAM];
       char tempor_char;

        for(int i =0; i <= quantidade; i++) {

           for(int j = i + 1; j <= quantidade; j++) {

            if(strcmp(cadastro_tempor[i].nome_tempor, cadastro_tempor[j].nome_tempor) > 0){

              strcpy(temp_string, cadastro_temp[i].nome_tempor);
              strcpy(cadastro_tempor[i].nome_tempor, cadastro_tempor[j].nome_tempor);
              strcpy(cadastro_tempor[j].nome_tempor, tempor_string);

              strcpy(tempor_string, cadastro_tempor[i].matricula_tempor);
                    strcpy(cadastro_tempor[i].matricula_tempor, cadastro_tempor[j].nome_tempor);
                    strcpy(cadastro_tempor[j].nome_tempor,tempor_string);

                    tempor_char = cadastro_tempor[i].sex_tempor;
                    cadastro_tempor[i].sex_tempor = cadastro_tempor[j].sex_tempor;
                    cadastro_tempor[j].sex_tempor = tempo_char;

                    strcpy(tempor_string, cadastro_tempor[i].data_nasc_tempor);
                    strcpy(cadastro_tempor[i].data_nasc_tempor, cadastro_tempor[j].data_nasc_tempor);
                    strcpy(cadastro_tempor[j].data_nasc_tempor, tempor_string);

                    strcpy(tempor_string, cadastro_tempor[i].cpf_tempor);
                    strcpy(cadastro_tempor[i].cpf_tempor, cadastro_tempor[j]. cpf_tempor);
                    strcpy(cadastro_tempor[j].data_nasc_tempor, tempor_string);


           }
        }

        printf("Kista de alubos - Orden alfabetica");
        for(int i =0; i < quantidade; i++) {

            printf("Numero: %d\n", i+1);
            printf("Matricula: %s\n",cadastro_tempor[i].matricula_tempor);
            printf("Nome: %s\n", cadastro_tempor[i].nome_tempor);
            printf("Sexo: %c\n",cadastro_tempor[i].sex_tempor);
            printf("Data de nascimento %s\n", cadastro_tempor[i].sex_tempor);
            printf("Data de nascimento %s\n", cadastro_tempor[i].data_nac_tempor);
            printf("CPF: %s\n",cadastro_tempor[i].cpf_tempor);

        }

        printf("\n");

     }
  }

  void listarBuscaNome(int qtd_alunos, Pessoa cadastro_alunos[], int qtd_professores, Pessoa cadastro_professores[]) {

       char procura[TAM];

       fgets(procura, TAM, stdin);
       setbuf(stdin, NULL);

       if(qtd_alunos <= 0){

          printf("\nCadastro de alunos(all) vazio.\n");
       }else {

           printf("Resultado alunos(all):\n\n");

           for(int i = 0; i < qtd_alunoss; i++) {

                if(strcmp(cadastro_alunos[i].nome,procura)! = NULL) {

                    printf("Matricula: %s\n",cadastro_alunos[i].matricula);
                    printf("Nome: %s\n",cadastro_alunos[i].nome);

                }
           }
        }

        if(qtd_alunos < =0){

            printf("\nCadastro esta vazio\n");
        }else {

            printf("Resultado professores(all):\n\n");

             for(int i =0; i < qtd_professores; i++){

                if(strstr(cadastro_professores[i].nome,procura)!= NULL) {

                     printf("Matricula: %s\n", cadastro_professore[i].matricula);
                     printf("Nome: %s\n",cadastro_professores[i].nome);
                }
             }
        }
        printf("\n");
  }

  void listarPessoaSorteioPorData(int quantidade, Pessoa cadastro[], Pessoa_tempor cadastro_tempor[]) {

       for(int i =0; i < quantidade; i++) {

        strcpy(cadastro_tempor[i].nome_tempor, cadastro[i].nome);
        strcpy(cadastro_tempor[i].matricula_tempor, cadastro[i].matricula);
        cadastro_temp[i].sex_tempor = cadastro[i].sex;
        strcpy(cadastro_tempor[i].data_nasc_tempor,cadastro[i].data_nasc);
        strcpy(cadastro_tempor[i].cpf_tempor,cadastro[i].cpf);

       }

       char tempor_string[TAM];
       char tempor_char;

       for(int i =0; i < quantidade - 1 ;i ++) {

          int len_1 = strlen(cadastro_tempor[i].dat_nasc_tempor);
          char digts_1[TAM]; // digitos_01[TAM
          char caract_1[TAM]; //
          int len_digts_1 = 0; // len_digitos_01

          strcpy(caract_1, cadastro_temp[i].data_nasc_tempor);

          for(int i = 0; i < len_1; i ++){

            if(caract_1[i] >= 49 && caract_1[i] <= 57){

                digts_1[len_digts_1] = caract_1[i];
                len_digts_1++;
            }
          }

          digts_1[len_digts_1] = '\0';

          int dia_1 = dat_1 / 1000000;
          int mes_1 = dat_1 % 1000000 / 10000;
          int ano_1 = dat_1 % 10000;

          for(int j = i + 1; j < quantidade; j++) {

            int len_2 = strlen(cadastro_tempor[j].data_nasc_tempor);
            char digts_1+2[TAM];
            char caract_2[TAM];
            int len_digts_2 =0;

            strcpy(caract_2, cadastro_tempor[j].data_nasc_tempor);
            char digts_2[TAM];
            char caract_2[TAM];
            int len_digts_2 = 0;

            strcpy(caract_2, cadastro_tempor[j].data_nasc_tempor);

            for(int j=0; j < len_2; j++) {

                if(caract_2[j] >= 49 && caract_2[j] <= 57) {

                    digits_2[len_digts_2] = caract_2[j];
                    len_digts_2++;
                }
            }

            digts_2[len_digts_2] = '\0';

            int j = i + 1;
            int dat_2 = atoi(digts_2[j]);

            int dia_2 = dat_2 / 1000000;
            int mes_2 = dat_2 % 1000000 / 10000;
            int ano_2 = dat_2 % 1000;

            if(ano_2 > ano_1) {

            strcpy(tempor_string, cadastro_tempor[i].nome_tempor);
            strcpy(cadastro_tempor[i].nome_tempor, cadastro_tempor[j].nome_tempor);
            strcpy(cadasrto_tempor[j].nome_tempor, tempor_string);

            strcpy(tempor_string, cadastro_tempor[i].matricula_tempor);
            strcpy(cadastro_tempor[i].data_nasc_tempor, cadastro_tempor[j].data_nasc_tempor);
            strcpy(cadastro_tempor[j].matricula_tempor, tempor_string);

            tempor_char = cadastro_tempor[i].sexo_tempor;
            cadastro_tempor[i].sex_tempor = cadastro[j].sex_tempor;
            cadastro_tempor[j].sex_tempor = tempor_char;

            strcpy(tempor_string, cadastro_tempor[i].data_nasc_tempor);
            strcpy(cadastro_tempor[i].data_nasc_tempor, cadastro_tempor[j].data_nasc_tempor);
            strcpy(cadastro_tempor[j].data_nasc_temp, tempor_string);

            strcpy(tempor_string, cadastro_tempor[i].cpf_tempor);
            strcpy(cadastro_tempor[i].cpf_tempor, cadastro_temp[j].cpf_tempor);
            strcpy(cadastro_tempor[j].cpf_tempor, tempor_string);

           }
           if (ano_2 == ano_1 && mes_2 > mes_1) {

             strcpy(tempor_string, cadastro_tempor[i].nome_tempor);
             strcpy(cadastro_tempor[i].nome_tempor, cadastro_tempor[j].nome_tempor);
            strcpy(cadastro_tempor[j].matricula_tempor, tempor_string);

           strcpy(tempor_string, cadastro_tempor[i].matricula_tempor);
           strcpy(cadastro_tempor[i].matricula_tempor, cadastro_tempor[j].matricula_tempor);
           strcpy(cadastro_tempor[j].matricula_tempor, tempor_string);

           tempor_char = cadastro_tempor[i].sex_tempor;
           cadastro_tempor[i].sexo_tempor = cadastro_tempor[j].sex_tempor;
           cadastro_tempor[j].sex_tempor = tempor_char;

           strcpy(tempor_string, cadastro_tempor[i].data_nasc_tempor);
           strcpy(cadastro_tempor[i].data_nasc_temp, cadastro_temp[j].data_nascimento_tempor);
           strcpy(cadastro_tempor[j].data_nascimento_tempor, tempor_string);

           strcpy(tempor_string, cadastro_tempor[i].cpf_tempor);
				strcpy(cadastro_tempor[i].cpf_tempor, cadastro_tempor[j].cpf_tempor);
				strcpy(cadastro_tempor[j].cpf_tempor, tempor_string);
           }
        if(ano_2 == ano_1 && mes_2 == mes_1 && dia_2 > dia_1) {

             strcpy(tempor_string, cadastro_tempor[i].nome_tempor);
        	strcpy(cadastro_tempor[i].nome_tempor, cadastro_tempor[j].nome_tempor);
        	strcpy(cadastro_tempor[j].nome_tempor, tempor_string);

        	strcpy(tempor_string, cadastro_tempor[i].matricula_tempor);
        	strcpy(cadastro_tempor[i].matricula_tempor, cadastro_tempor[j].matricula_tempor);
        	strcpy(cadastro_tempor[j].matricula_tempor, tempor_string);

        	tempor_char = cadastro_tempor[i].sex_tempor;
        	cadastro_tempor[i].sex_tempor = cadastro_tempor[j].sex_tempor;
        	cadastro_tempor[j].sex_tempor = tempor_char;

        	strcpy(tempor_string, cadastro_tempor[i].data_nasc_tempor);
        	strcpy(cadastro_tempor[i].data_nasc_tempor, cadastro_tempor[j].data_nasc_tempor);
        	strcpy(cadastro_tempor[j].data_nasc_temp, tempor_string);

        	strcpy(tempor_string, cadastro_tempor[i].cpf_tempor);
        	strcpy(cadastro_tempor[i].cpf_tempor, cadastro_tempor[j].cpf_tempor);
        	strcpy(cadastro_tempor[j].cpf_tempor, tempor_string);
          }
       }
  }

   for(int i = 0; i < quantidade; i++){

		printf("Numeracao: %d\n", i+1);
		printf("Matricula: %s\n",cadastro_tempor[i].matricula_tempor);
		printf("Nome: %s\n",cadastro_tempor[i].nome_tempor);
		printf("Sexo: %c\n",cadastro_tempor[i].sexo_tempor);
		printf("Data de nascimento %s\n",cadastro_tempor[i].data_nascimento_tempor);
		printf("CPF: %s\n",cadastro_tempor[i].cpf_tempor);

	}

	  printf("\n\n");
  }

  void listarAniversarios(int qtd_alunos, Pessoa cadastro_alunos[], int qtd_professores, Pessoa cadastro_professores[]) {

     time_t moment ; // momento
     struct tm* tempor_atual;

     moment = time(NULL);
     tempor_atual = localtime(&moment);

     for(int i = 0; i < qtd_alunos - 1; i++) {

        int len = strlen(cadastro_alunos[i].dat_nasc);
        char digits [TAM];
        char caract[TAM];
        int len_digitos = 0;

        strcpy(caract, cadastro_alunos[i].dat_nasc);
        char digts[TAM];
        char caract[TAM];
        int len_digitos = 0;

          strcpy(caract, cadastro_alunos[i].dat_nasc);

          for(int i =0; i < len; i++) {

              if(caract[i] >= 49 && caract[i] <= 57) {

                 digits[len_digitos] = caract[i];
                 len_digitos++;
              }
          }

         digits[len_digitos] = '\0';

         int data = atoi(digits);
         int mes = data % 1000000 / 10000;

         if(tempor_atual -> tm_mon + 1 == mes) {

              printf("Nome: %s\n", cadastro_alunos[i].nome);
              printf("Data de nascimento %s\n",cadastro_alunos[i].data_nasc);
         }
     }

     for(int i = 0; i < qtd_professores - 1; i++){

         int len = strlen(cadastro_professores[i].dat_nasc);
         char digts [TAM];
         char caract[TAM];
         int len_digts = 0;

         strcpy(caract, cadastro_professores[i].dat_nasc);

         for(int i = 0; i < len; i++){

			if(caract[i] >= 49 && caract[i] <= 57){
			//if(isdigit(caracteres[i])){
				digits[len_digitos] = caract[i];
				len_digitos++;

			}

		}
		digits[len_digts] = '\0';

        int data = atoi(digts);
        int mes = data % 1000000 / 10000;

        if(tempor_atual -> tm_moment + 1  == mes) {

            printf("Nome %s\n", cadastro_alunos[i].nome);
            printf("Data de nascimento %s\n", cadastro_alunos[i].data_nasc);
        }
     }
 }

 void listarDisciplinas(int quantidade, Disciplina cadastro[]){

     if(quantidade <= 0){

        printf("Cadastro Vazio");
     }else {

        for(int i =0; i < quantidade; i++) {

            printf("Código: %s\n",cadastro[i].codigo);
            printf("Nome: %s\n", cadastro[i].nome);
            printf("Professor: %s\n",cadastro[i].professores);
            printf("Semestre: %d\n",cadastro[i].semestre);
        }
     }

     printf("\n\n");

 }

 void listarAlunoDisciplinas(int qtd_discplinas, Disciplina cadastro_disciplinas[], int qtd_professores, PEssoa cadastro_professores[]) {

    int alunos_cadtrads;    // alunos cadastrados


    if(qtd_disciplinas <= 0) {

		printf("\nEsse aluno nao possui registros!\n\n");

 }else {

      for(int i = 0; i < qtd_disciplinas; i++) {

    alunos_cadtrads = cadastro_disciplinas[i].qtd_alunos_disciplina;
    printf("Numero: %d\n", i+1);
    printf("Código: %s\n", cadastro_disciplinas[i].codigo);
    printf("Nome da disciplina: %s\n", cadastro_disciplinas[i].nome);
    printf("Alunos matriculados na disciplina: %d\n",alunos_cadstrads);
    printf("\nID do docente: %d",cadastro_disciplinas[i].id_professor);
    printf("\nNome do docente: %s", cadastro_professores[cadastro_disciplinas[i].id_professor - 1].nome);

    printf("Semestre: %d\n", cadastro_professores[cadastro_disciplinas[i].semestre);

    	for(int j = 0; j < alunos_cadtrads; j++) {

				printf("Discente %d: %s", j + 1, cadastro_disciplinas[i].aluno[j].nome);

			}

         }
     }
   }

   void listarAlunoDisciplinasMaisde50Vagas (int qtd_disciplinas, Disciplina) {

   int alunos_cadtrads;

   if(qtd_disciplinas <= 0) {

         printf("\n Não há registros!\n");

      }else {
          for(int i = 0; i < qtde_disciplinas; i++) {

            alunos_cadtrads = cadastro_disciplinas[i].qyd_alunos_disciplina;

            if(alunos_cadtrads < 5) {

                printf("Numero: %d\n", i+1);
                printf("Código: %s\n",cadastro_disciplinas[i].codigo);
                printf("Nome da disciplina: %s\n",cadastro_disciplinas[i].nome);
                printf("Alunos matriculados na disciplina: %d\n",alunos_cadtrads );
                printf("\nID do docente: %d", cadastro_disciplinas[i].id_professor);
                printf("\nNome do docente: %s", cadastro_professores[cadastro_disciplinas[i].id_professor - 1].nome);
                printf("Semestre: %d\n",cadastro_disciplinas[i].semestre);
            }
          }
      }
   }

   void listarAlunoEmMaisDe1Disciplinas(int qtd_disciplinas, Disciplina cadastro_disciplinas[], int qtd_alunos, Pessoa cadastro_alunos[]) [

      if(qtd_disciplinas <= 3) {

		printf("\nNão há registros suficientes!\n\n");

	} else{


    for(int i = 0; i < qtd_alunos; i++) {

     int disciplinas =0;
     int posicao =0;

        while(posicao <= qtd_disciplinas){

				for(int j = posicao; j < qtd_disciplinas; j++){


					if(strcmp(cadastro_disciplinas[posicao].aluno[j].nome, cadastro_alunos[i].nome) == 0){

						j++;
						posicao += j;
						disciplinas++;
						break;

					}

					break;

				}

			}

			if( disciplinas > 3) {

                 printf("Matricula: %s\n",cadastro_alunos[i].matricula);
                 printf("Nome: %s\n",cadastro_alunos[i].nome);

			}
      }
    }
   ]
