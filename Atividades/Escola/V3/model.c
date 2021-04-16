#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include "funcs.h"

void cadastrarPessoa(int quantidade, Pessoa cadastro[]); {

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

    printf("\n\n");
   }


 void alterarPessoa(int quantidade, Pessoa cadastro[]) { // void alterarIndividuo

  int num; // int numero
  char sex_nov; // char sexo_novo
  char matr_nov[TAM]; // matricula_nova
  char nome_nov[TAM]; // nome_novo
  char dat_nov[TAM]; // data_nova
  char cpf_nov´[TAM]; //cpf_novo

  listarPessoa(quantidade, cadastro); // listarIndividuo

  printf("\nDigite o numero que irá alterar o perfil:");
  scanf("%d",&numero);
  setbuf(stdin, NULL);

  int true =1;

    while(true)  {

        if(numero <= 0 || numero > quantidade) {

             printf("\n Esse Registro nao existe . Tente Novamente:");
             scanf("%d", &numero);
             setbuf(stdin, NULL);
        } else {
              break;
        }
    }


    int selecao;

    printf("Qual dado deseja alterar?\n");
    scanf("%d", &escolha);


    printf("*************************\n");
    printf("***************************");
    printf("\n  1-Matricula \n");
    printf("|*  2-Nome |\n");
	printf("|*  3-Sexo *|\n");
	printf("|*  4-Nascimento *|\n");
	printf("|*  5-CPF*|\n");

	switch(selecao) {

	 case 1: {

	  printf("\n Informe o novno número de matricula:\n");
	  fgets(matricula_nov, TAM, stdin);
	  setbuf(stdin, NULL);

	   while(true) {

        if(validMatricula(matricula_nova)!= 1) {

            printf("\nMatricula informada nao e valida.Por favor,informe novamente\n");
            fgets(matricula_nova, TAM, stdin);
            setbuf(stdin, NULL);


        }else {
            strcpy(cadastro[numero -1].matricula,matricula_nov);
            break;
        }
	     }
	   }
	   break;
	}
 }

 case 2: {

   printf("\nInforme o novo nome:\n");
   fgets(nome_nov, TAM, stdin);
   setbuf(stdin, NULL);

   while(true) {

      if(valideNome(nome_novo)

         printf("\nEsse Nome nao e valdio. Digite novamente\n");
         fgets(nome_novo, TAM,stdin);
         setbuf(stdin, NULL);

   }else {

        strcpy(cadastro[numero - 1].nome,nome_novo);
        break;
    }

  break;

}

case 3: {

   printf("\nDigite o novo Sexo:\n");
   scanf("%c",&sex_nov);
   setbuf(stdin, NULL);


   while(true) {

      if(valideSexo(sexo_novo) != 1) {

        printf("Sexo invalido. Informe novamente\n");
        fgets(nome_nov, TAM, stdin);
        setbuf(stdin, NULL);

      }else {
            strcpy(cadastro[numero -1].nome, nome_novo);
            break;
      }
   }
    break;
}


case 3: {

   printf("\nDigite o novo Sexo:\n");
   scanf("%c", &sex_nov);
   setbuf(stdin, NULL);

   while(true) {

       if(valideSexo(sexo_novo) != 1) {

        printf("\nSexo inválido. Digite novamente.\n");
        scanf("%c", &sex_nov);
        setbuf(stdin, NULL);
       } else{

            cadastro[numero - 1].sexo = sexo_novo;
             break;
       }
   }

   break;


case 4: {

    printf("\nDigite a nova data de nascimento:\n");
    fgets(data_nova, TAM, stdin);
    setbuf(stdin, NULL);

    while(true) {

        if(valideData(data_nova) != 1) {

            printf("\nData inválida. Informe novamente.\n");
            fgets(data_nov, TAM, stdin);
            sebuf(stdin, NULL);
        } else {

             strcpy(cadastro[numero - 1].dat_nasc,data_nova);
             break;

        }
    }
      break;
  }

   case 5: {

     printf("\n Digite o novo CPF:\n");
     fgets(cpf_nov,TAM, stdin);
     setbuf(stdin, NULL);

     whiçe(true) {

         if(valideCPF(cpf_nov) != 1) {

            printf("\n CPF inválido. Infome novamente:");
            fgets(cpf_nov, TAM, stdin);
            setbuf(stdin, NULL);
         } else {

            strcpy(cadastro[numero - 1].cpf, cpf_nov);
            break;
         }
     }
      break;
   }

   default: {

      printf("\nOpcao invalida\n");
      break;
   }


  void removerPessoa(int quantidade, Pessoa cadastro[]) {

  int pos; // int posicao

  listarPessoa(quantidade, cadastro);

  printf("\nDigite o perfil que vc deseja excluir:");
  scanf("%d", &pos);
  setbuf(stdin, NULL);
  pos --;

  int i;

  for(i = pos; i < quantidade; i++) {

    strcpy(cadastro[i].matricula, cadastro[i+ 1].matricula);
    strcpy(cadastro[i].nome, cadastro[i +1].nome);
    cadastro[i].sexo = cadastro[i + 1].sexo;
    strcpy(cadastro[i].dat_nasc, cadastro[i + 1].dat_nasc);
    strcpy(cadastro[i].dat_nasc, cadastro[i +1].dat_nasc);
    strcpy(cadastro[i].cpf, cadastro[i + 1].cpf);
    }

    quantidade --;

    listarPessoa(quantidade, cadastro);
  }
}

void cadastrarDisciplinas(int qtd_professores, int qtd_disciplinas, Disciplina cadastro_disciplinas[],Pessoa cadastro_professores[]) {

 int error = 1;

 int valideNome;
 int valideCodigo;
 int valideProfessor;
 int valideSemestre;

 printf("Digite o codigo:\n");
 fgets(cadastro_disciplinas[quantidade_disciplinas].codigo, TAM, stdin);
 setbuf(stdin, NULL);

  while(error) {

    valideCodigo = validCodigo(cadastro_disciplinas[quantidade_disciplinas].codigo);

     if(valideCodigo != 1) {

        printf("\nCódigo inválido. Digite o codigo novamente:\n");
        fgets(cadastro_disciplinas[quantidade_disciplinas].codigo, TAM, stdin);
        setbuf(stdin, NULL);
     }else {
         break;
     }
  }


	printf("Informe o nome:\n");
	fgets(cadastro_disciplinas[qtd_disciplinas].nome, TAM, stdin);
	setbuf(stdin, NULL);

	while(error) {

        valideNome = validNome(cadastrar_disciplinas[qtd_disciplinas].nome);

        if(valideCodigo != 1) {

            printf("\nCódigo inválido. Informe novamente:\n");
            fgets(cadastro_disciplinas[qtd_disciplinas].codigo,TAM, stdin);
            setbuf(stdin, NULL);
        }else {
               break;
        }
	}

	printf("Digite o nome:\n");
	fgets(cadastro_disciplinas[qtd_disciplinas].professor, TAM, stdin);
   setbuf(stdin, NULL);


 while(error) {

    valideNome = validNome(cadastro_disciplinas´qtd_disciplinas.nome);

    if(valideNome != 1) {

        printf("\nNome inválido. Digite novamente.\n");
        fgets(cadastro_disciplinas[qtd_disciplinas].nome, TAN, stdin);
        setbuf(stdin, NULL);
    } else {
       break;
     }


    printf("Informe o Professor\n");
    fgets(cadastro_disciplinas[qtd_disciplinas].professor, TAM, stdin);
  setbuf(stdin, NULL);


   while(error) {

    valideProfessor = validProfessor(qtd_professores, qtd_disciplinas,cadastro_disciplinas[qtd_dsiciplinas].professor, cadastro_professores[qtd_professores].nome);

    if(valideProfessor != 1) {

        printf("\nEsse professor nao faz parte do banco de registro. Digite novamente\n");
			fgets(cadastro_disciplinas[qtd_disciplinas].professor, TAM, stdin);
			setbuf(stdin, NULL);
    } else {
        break;
    }
   }

    printf("Informe o semestre (1 ou 2)\n");
    scanf("%d", &cadastro_disciplinas[qtd_disciplinas].semestre);
	setbuf(stdin, NULL);

	while(error) {

        valideSemestre = validSemestre(cadastro_disciplinas[qtd_disciplinas].semestre);

    if(valideSemestre != 1) {

    	printf("\nSemestre nao valido\n");
			scanf("%d", &cadastro_disciplinas[qtd_disciplinas].semestre);
			setbuf(stdin, NULL);

	}else {
	    break;

	}
}
  printf("\n\n");


  void alterarDisciplinas(int quantidade,Disciplina cadastro[], int qtd_professores[]) {

      int numero =0; // numero
      char nom_nov[TAM]; // nome_novo
      char prof_nov[TAM]; // professor_novo
      char cod_nov[TAM]; // codigo_novo
      int smtr_nov; // semestre_novo

      listarDisciplinas(quantidade, cadastro);

      printf("\nInforme o numero de uma disciplina que deseja alterar:\n");
      scanf("%d",&num);
      setbuf(stdin,NULL);

      int vdd = 1;  // true

      while(vdd) {

         if(numero <=0 || numero > quantidade) {

            printf("\nRegistro nao existi. Digite novamente.");
            scanf("%d", &num);
            setbuf(stdin,NULL);
         }else {
              break;
         }
      }


      int escolha;

      printf("Escolha qual registro vc deseja alterar?\n");
      scanf("%d", &escolha);

      printf("___________________________\n");
      printf("**********************\n");
      printf("**********************\n");
      printf("******  1-Nome  *******\n");
      printf("******  2-Professor  *******\n");
      printf("******  3-Codigo  *******\n");
      printf("******  4-Semestre *******\n");
      printf("******  *****  *******\n");


      switch(escolha) {

       case 1: {

         printf("\nInforme o novo nome da disciplina:\n");
         fgets(nom_nov, TAM,stdin);
         setbuf(stdin, NULL);

         while(vdd) {

            if(valideNome(nom_nov)!= 1) {

                printf("\nNome inválido. Favor Digite novamente.\n");
                fgets(nom_nov,TAM,stdin);
                setbuf(stdin,NULL);
       }else {
          strcpy(cadastro[numero -1].nome, nom_nov);
          break;
        }
      }
   }

   break;

  case 2: {

   printf("\nInforme o nome do docente:\n");
   fgets(prof_nov,TAM,stdin);
   setbuf(stdin, NULL);

    while(vdd) {

        if(valideNome(prof_nov)!= 1) {

            printf("\nNome nao valido. Digite novamente.\n");
            fgets(prof_nov,TAM,stdin);
            setbuf(stdin,NULL);
        } else {

             strcpy(cadastro[numero - 1].professor, prof_nov);
             break;
        }
     }
    }
    break;

  case 3:{

   printf("\nInforme novo código:\n");
   fgets(cod_nov, TAM, stdin);
   setbuf(stdin, NULL);

     while(true) {

        if(valideCodigo(cod_nov) != 1) {

            printf("\nCódigo nao válido. Informe novamente.\n");
            fgets(cod_nov, TAM,stdin);
            setbuf(stdin,NULL);
        }else {

             strcpy(cadastro[numero - 1].codigo,cod_nov);
             break;
        }
     }
  }

  case 4:

     printf("\n Informe o novo Semestre:\n");
     scanf("%d",&smtr_nov);
     setbuf(stdin, NULL);

     while(true) {

        if(valideSemestre(smtr_nov) !=1) {

             printf("\n Semestre nao valido. Informe de novo.\n");
             scanf("%d", &smtr_nov);
             setbuf(stdin,NULL);
        }else {

             cadastro[numero -1].semestre = smtr_nov;
              break;
        }
     }

      break;


      default: {

       printf("\n Opcao nao valida.\n");
         break;
         }
      }

 void removerDisciplinas(int quantidade, Disciplina cadastro[]) {

   int pos; // posicao

   listarDisciplinas(quantidade, cadastro);

   printf("\n Digite qual disciplina vc deseja deletar:\n");
   scanf("%d". &pos);
   setbuf(stdin,NULL);
   pos --;

   int i;

   for(i = pos; i < quantidade; i++) {

        strcpy(cadastro[i].codigo, cadastro[i + 1].codigo);
        strcpy(cadastro[i].codigo, cadastro[i + 1].professor);
        strcpy(cadastro[i].codigo, cadastro[i + 1].nome);
        cadastro[i].semestre = cadastro[i + 1].semestre;
      }
      quantidade --;

      listarDisciplinas(quantidade, cadastro);
    }


    void matricularAlunoDisciplinas(int qtd_disciplinas, Disciplina cadastro_disciplinsa[], int qtd_alunos, Pessoa cadastro_alunos[]) {

         int id_alun; // id_aluno
         id_disc; // id_disciplina
         int aluns_cadast;// alunos_cadastrados
         int true = 1; // true

         listarDisciplinas(qtd_disciplinas,cadastro_disciplinas);

         printf("\n Digite o ID da disciplina em qual deseja cadastrar um aluno:");
         scanf("%d",&id_disc);
        setbuf(stdin, NULL);

          while(true) {

            if(id_disc <= 0 || id_disc > qtd_disciplinas) {

                printf("\n ID invalido! Digite novamente\n");
                scanf("%d", &id_disciplina);
                setbuf(stdin, NULL);

            }else {
                 break;
            }
          }

    }

     id_disciplina--;

     aluns_cadast = cadastro_disciplinas(id_disciplina).qtd_alunos_disciplina;

     printf("\n Digite o ID do aluno que podera se cadastrar na disciplina:");
     scanf("%d", &id_aluno);
     setbuf(stdin, NULL);

     while(true) {


        if(id_disc <= 0 || id_disc > qtd_disciplina) {

            printf("\nID nao valido! INforme novamente.\n");
            scanf("%d", &id_disc);
            setbuf(stdin, NULL);
        }else {

             break;
        }
     }
     id_disc--;

     aluns_cadast = cadastro_disciplinas(id_disciplina).qtd_alunos_disciplina;

     printf("\nInforme o ID do aluno que deseja cadastrar na disciplina: ");
     scanf("%d",&id_aluno);
     setbuf(stdin, NULL);

     while(true) {

        if(id_aluno <=0 || id_aluno > qtd_alunos) {

            printf("\n ID nao válido! Informe novamente.\n");
            scanf("%d", &id_aluno);
            setbuf(stdin,NULL);
        } else {
            break;
        }
     }

     id_aluno--;

    strcpy(cadastro_disciplinas[id_disc].aluno[aluns_cadast].matricula, cadastro_alunos[id_aluno].matricula);
    strcpy(cadastro_disciplinas[id_disciplina].aluno[aluns_cadast].nome, cadastro_alunos[id_alunos].nome);
    cadastro_disciplinas[id_disciplina].aluno[alunos_cadast].sexo = cadastro_alunos[id_aluno].sexo;
    strcpy(cadastro_disciplinas[id_disciplina].aluno[alunos_cadast].data_nascimento, cadastro_alunos[id_aluno].data_nasc);
    strcpy(cadastro_disciplinas[id_disciplina].aluno[alunos_cadast].cpf_nascimento, cadastro_alunos[id_aluno].data_nasc);

    cadastro_disciplina[id_disciplina].qtd_alunos_disciplinas++;

}

  void removerAlunoDisciplinas(int qtd_disciplinas, Disciplina cadastro_disciplinas[]) {

    int id_disciplina;
    int id_aluno;
    int aluns_cadast;
    int true =0;

     printf("\nDigite o id da disciplina da qual deseja remover o aluno:");
     scanf("%d",&id_disciplina);
     setbuf(stdin,NULL);

      while(true) {

         if(id_disciplina <= 0 || id_disciplina > qtd_disciplinas) {

              printf("\n Numero de ID invalido! Informe novamente:");
              scanf("%d",&id_disciplina);
              setbuf(stdin,NULL);
         } else {
              break;
         }
      }

      id_disc--;

    printf("\n Informe o ID do aluno que deseja remover da disciplina:");
    scanf("%d", &id_aluno);
    setbuf(stdin,NULL);

       while(true) {

          if(id_aluno <= 0 || id_aluno > cadastro_disciplinas[id_aluno].qtd_alunos_disciplina) {

            printf("\n Número nao e valido! Digite novamente!");
            scanf("%d",&id_aluno);
          } else {
                break;
          }
       }

        id_aluno--;

         aluns_cadast = cadastro_disciplinas(id_disciplina).qtd_alunos_disciplina;

for (int i = id_aluno; i < alunos_cadast; i++) {

    strcpy(cadastro_disciplinas[id_disciplina].aluno[id_aluno].matricula,cadastro_disciplinas[i].aluno[i + 1].matricula);
    strcpy(cadastro_disciplinas[id_disciplina].aluno[id.aluno].nome,cadastro_disciplinas[i].aluno[i +1].nome);
    cadastro_disciplinas[id_disciplina].aluno[id_aluno].sex = cadastro_disciplinas[i].aluno[i + 1].sex;
    strcpy(cadastro_disciplinas[id_disciplina].aluno[id_aluno].dat_nasc, cadastro_disciplinas[i].aluno[i + 1].dat_nasc);
    strcpy(cadastro_disciplinas[id_disciplina].aluno[id_aluno].cpf, cadastro_disciplinas[i].aluno[i + 1].cpf);



    }
    cadastro_disciplinas[id_disciplina].qtd_alunos_disciplinas--;
  }
