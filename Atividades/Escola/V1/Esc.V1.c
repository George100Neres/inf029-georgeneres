
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

typedef struct registros {

  char data_nasc[MAX];
  char matricula[MAX];
  char nome[MAX];
  char cpf[MAX];
  char sex[1];

}Aluno;


int pageHome(int escolha); // paginaPrincipal
void cadsAluns(int quantidade, Aluno cadastro[]); // cadastrarAlunos
void listAluns(int quantidade,Aluno cadastro[]); // listarAlunos
int validarMatricula(char matricula[]); //validarMatricula
int validarCPF(char cpf[]);//validarCPF
int validarNome(char nome[]); //validarNome
int validData(char data_nasc[]); // validarData
int validarSexo(char sex); // validarSexo



 int main() {
    Aluno cadastro_aluno[MAX];
    int qtd_aluns = 0; // quantidade alunos
    int escolha= 0; // escolha
    int pont = 1;   //flag


   while(pont == 1 ){

    escolha = pageHome(escolha);

      switch(escolha){

         case 1: {

             if(qtd_aluns < MAX) {
                //Sera Incrementado a quantidade de alunos
                cadsAluns(qtd_aluns, cadsAluns);
                printf("Cadastro Realizado:");
                qtd_aluns++;
                break;
             }else{

                 printf("Turma cheia.\n");
                 break;
             }
         }
         case 2: {

          printf("\n**** Alunos(as) cadastrados(as)****\n\n");
          listAluns(qtd_aluns, cadsAluns);
          break;


         }

         case 3: {

         printf("Exit...");
         pont = 0;
         break;
         }

         default:{
           printf("\nOpcao inválida\n:");
           break;
         }
      }
   }

   return 0;
 }

 int pageHome(int op){

     printf("\n**** Menu Projeto Escola ****\n\n");
     priontf("1  - Cadastrar Aluno(a)\n");
     printf(" 2  - Listar Aluno(a)\n");
     printf(" 3  - Sair\n");


     printf("Digite a sua opcao:\n");
     scanf("%d", &op);
     setbuf(stdin, NULL);

     return op;

 }



 void cadsAluns(int quantidade, Aluno cadastro[]){

 int validNome; // validaNome
 int validData; // validaData
 int validCPF; // validaCPF
 int validSexo; // validaSexo
 int validMatricula; // validaMatricula
 int error= 1; // errado

 printf("Informe a matrícula:\n");
 fgets(cadastro[quantidade].matricula, MAX, stdin);
 setbuf(stdin, NULL);

 while(error) {

  validMatricula =  validarMatricula(cadastro[quantidade].matricula);

  if(validMatricula != 1) {

    printf("\nMatricula inválida. Informe novamente:\n");
    fgets(cadastro[quantidade].matricula,MAX,stdin);
    setbuf(stdin, NULL);

    }else {
        break;
    }
  }

  printf("Informe o nome:\n");
  fgets(cadastro[quantidade].nome,MAX,stdin);
  setbuf(stdin,NULL);





  while(error) {

    validNome = validarNome(cadastro[quantidade].nome);

    if(validData!= 1) {

    printf("\nNome nao foi valido. Informe novamente:\n");
    fgets(cadastro[quantidade].nome, MAX, stdin);
    setbuf(stdin, NULL);

    }else {

        break;
    }
  }

 printf("Informe o Sexo:\n");
 scanf("%c",&cadastro[quantidade].sex);
 getchar();

 while(error) {

    validSexo = validarSexo(cadastro[quantidade].sex);


   if(validSexo != 1) {

    printf("\nSexo inválido. Informe novamente:\n");
    scanf("%c",&cadastro[quantidade].sex);
    getchar();
   }else {
        break;

   }
 }

 printf("Informe a data de nascimento, formato : dd/mm/aaaa.\n");
 fgets(cadastro[quantidade].data_nasc, MAX, stdin);
 setbuf(stdin, NULL);
  //getchar();

 while(error) {

    validData = validarData(cadastro[quantidade].data_nasc);

    if(validData != 1) {

        printf("\nData válida. Informe novamente:\n");
        fgets(cadastro[quantidade].data_nasc, MAX, stdin);
        setbuf(stdin, NULL);

    }else {

         break;
    }
 }

  printf("Informe o CPF\n");
  fgts(cadastro[quantidade].cpf, MAX, stdin);
  setbuf(stdin, NULL);

  while(error) {

    validCPF = validarCPF(cadastro[quantidade].cpf);

      if(validCPF != 1) {

        printf("\nData inválida. Informe novamente:\n");
        fgets(cadastro[quantidade].data_nasc, MAX, stdin);
        setbuf(stdin, NULL);

      }else {
            break;
      }
  }

  printf("\n\n");
 }


 void listAluns(int quantidade,Aluno cadastro[]) {

     if(quantidade <= 0){

        printf("Cadastro Vazio:");

     }else {

         for(int i=0; i < quantidade; i++) {

               printf("Matricula: %s\n",cadastro[i].matricula);
               printf("Nome: %s\n",cadastro[i].nome);
               printf("Sexo: %s\n",cadastro[i].sex);
               printf("Data de nascimento: %s\n",cadastro[i].data_nasc);
               printf("CPF: %s\n",cadastro[i].cpf);
            }
     }

     printf("\n\n");
 }


   int validarSexo(char sex) {

   if (sex == 'M' || sex == 'F' || sex == '0' || sex == 'm' || sex == 'f' ||  sex== 'o') {
     return 1;

      }else {
        return -1;
      }
   }


   int validarCPF(char cpf[]){

   int  icpf[MAX];

   int result_1,result_2,digit_1,digit_2,valor;

   int soma = 0;
  // Digitos dod CPF

   for(int i = 0; i < 11; i++)

    icpf[i]= cpf[i] - 48;

    //encontrar o primeiro digito verificador

    for(int i =0; i < 9; i++)
      soma += icpf[i] * (10 - i);

    result_1 = soma % 11;


    if(result_1 == 0 || result_1 == 1) {

        digit_1 = 0;


    } else {
     digit_1 = 11 - result_1;
    }

    //encontrar o segundo digito verificador

    soma=0;

    for(int i=0; i < 10; i++) {

        soma += icpf[i] * (11 - i);
    }

    valor = (soma / 11) * 11;

    result_2 = soma - valor;

    if(result_2 == 0 || result_2 == 1) {

        digit_2 = 0;

    }else {

    digit_2 = 11 - result_2;
    }


     if(strlen(cpf) - 1 != 11 && ((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
      (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
      (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||(strcmp(cpf,"99999999999") == 0))){

      return -1;

   }else if(digit_1 == icpf[9] && digit_2 == icpf[10]){

   return 1;

   }else if(digit_1 == icpf[9] && digit_2 == icpf[10]) {

      return 1;

   }else {
        return -1;
   }


}

 int validarMatricula(char matricula[]) {

    char caract[1];
    int len = strlen(matricula);
    int pont =1;

    strcpy(caract,matricula);

    if(len - 1 == 11) {

        for(int i = 0; i < len; i++){

            if(caract[i] < 49 && caract[i] > 57) {

                pont = 0;
                break;
            }
        }

        if((pont== 0) || ((strcmp(matricula,"00000000000") == 0) || (strcmp(matricula,"11111111111") == 0) || (strcmp(matricula,"22222222222") == 0) ||
		(strcmp(matricula,"33333333333") == 0) || (strcmp(matricula,"44444444444") == 0) || (strcmp(matricula,"55555555555") == 0) ||
		(strcmp(matricula,"66666666666") == 0) || (strcmp(matricula,"77777777777") == 0) || (strcmp(matricula,"88888888888") == 0) ||(strcmp(matricula,"99999999999") == 0))){

			return -1;

		}else {

			return 1;

		}

	}else{

		return -1;
    }
 }
   int validData(char dat_nasc[]) {

        int len = strlen(dat_nasc);
        char digits[MAX]; // digitos
        char caract[MAX];// caracteres
        int len_digit = 0; // len_digitos


        strcpy(caract, dat_nasc);

       for(int i =0; i < len; i++) {

           if(caract[i] >= 49 && caract[i] <=57) {

            digits[len_digit] = caract[i];
            len_digit++;
           }
       }
     digits[len_digit] = '\0';

     int data = atoi(digits);

     int dia = data / 10000000;
     int mes = data % 10000000 / 10000;
     int  ano = data % 10000;

     if(ano >= 1900 && ano <= 2100) {

        if(mes >= 1 && mes <= 12) {

              if ((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
	                return 1;

	            else if ((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
	            	 return 1;

	            else if ((dia >= 1 && dia <= 28) && (mes == 2))
	            	 return 1;

	            else if (dia == 29 && mes == 2 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
	            	 return 1;

	            else
	            	 return -1;
	        }else{

	        	return -1;
	        }

	    }else{

	    	return -1;

	    }

     }

  int validarNome(char nome[]) {

    char caract[MAX];
    int len = strlen(nome);
    int pont = 1;

    strcpy(caract, nome);

       if(len - 1 <= 30 && len - 1 > 5) {

        for(int i =0; i < len; i++) {

        if((caract[i] < 65 && caract[i] > 90) && (caract[i] < 97  && caract[i] > 122)) {

           pont =0;
            break;
           }
       }

       if(pont == 0){

        return -1;
       }else {

         return 1;
       }

     }else {

      return -1;
     }

   }


