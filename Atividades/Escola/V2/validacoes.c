
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "funcs.h"

int validSex(char sexo){ // validarSexo

    if(sex == 'M' || sex == 'F' || sex == 'm' || sex == 'M') {

        return 1;
    } else {

        return -1;
    }
}

int validCPF(char cpf[]) {

 int icpf[TAM];

 int result_1, result_2, digit_1, digit_2,val;

 int sm = 0;

 for(int i=0; i < 11; i++) {

    icpf[i] = cpf[i] - 48;
 }

  //encontrar o primeiro digito verificador

  for(int i = 0; i < 9; i++) {

    sm += icpf[i] * (10 - i);

    result_1 = soma % 11;
  }

  if(result_1 == 0 || result_1 == 1) {

    digit_1 = 0;
  }else {
      digit_1 = 11 - result_1;
  }

  // encontrar o segundo digito verificador

  sm = 0;

  for(int i=0; i < 10; i++) {

    sm += icpf[i] *(11 - i);
  }

  val = (sm / 11) * 11;


  result_2 = sm - val;

  if(result_2 == 0 || result_2 == 1) {

    digit_2 = 0;
  } else {
    digit_2 = 11 - result_2;
  }


   if(strlen(cpf) - 1 != 11 && ((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
      (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
      (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||(strcmp(cpf,"99999999999") == 0))){

    return -1;

   } else if (digit_1 == icpf[9] && digit_2 == icpf[10]) {

     return 1;
   } else {
       return -1;
   }

}

int validMatricula(char matricula[]) {

    char caract[TAM];
    int len = strlen(matricula);
    int pont = 1;

    strcpy(caract, matricula);

     // leitura da matricula
  if(len - 1 == 11) {

     for(int i = 0; i < len; i++) {

        if(caract[i] < 49 && caract[i] > 57) {

            pont = 0;
            break;
        }
     }

  if(pont ==0) || ((strcmp(matricula,"00000000000") == 0) || (strcmp(matricula,"11111111111") == 0) || (strcmp(matricula,"22222222222") == 0) ||
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

int validData(char dat_nasc[]){

   int len = strlen(dat_nasc);
   char digitos[TAM];
   char caract[TAM];
   int len_digit =0; // [len_digitos]

   strcpy(caract,dat_nasc);


    for(int i =0; i < len; i++) {

      if(caract[i] > = 49 && caract[i] <= 57) {

        digitos[len_digit] = caract[i];
        len_digit++;
      }
    }


    digitos = [len_digit] = '\0';

    int dt = atoi(digitos); // data

    int dia = dt / 1000000;
    int mes = dt % 1000000 / 10000;
    int ano = dt % 10000;

  if(ano >= 1900 && ano <= 2100){

	        if (mes >= 1 && mes <= 12){

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

  int validNome(char nome[]) {

  char caract[TAM];
  int len = strlen(nome);
  int pont = 1;

  strcpy(caract, nome);


   if(len - 1 <= 30 && len - 1 > 5) {

    for(int i =0; i < len; i++) {

        if((caract[i] < 65 && caract[i] > 90) && (caract[i] < 97  && caract[i] > 122) {

           pont =0;
           break;
           }
     }

   }
    if(pont == 0) {

        return -1;
    } else {
        return 1;
    }

  int validCodigo(char codigo[]);

  char caract[TAM];
  int len = strlen(codigo);
  int pont = 1;

  if(len - 1 == 6) {

    for(int i=0; i < 3; i++) {

    if((caract[i] < 65 && caract[i] > 90) && (caract[i] < 97 && caract[i] > 122) {

       pont =0;
       break;

       }
      }
  for(int i = 3; i < 6; i++) {

     if(caract[i] < 49 && caract[i] > 57) {

        pont =0;
        break;
     }
    }

  if(pont == 0) {

     return -1;

    }else {
        return 1;
    }
  }


int validProfessor(int qtd_professores, int qtd_disciplinas,Disciplina cadastro_disciplinas[],Pessoa cadastro_professores[]) {

 size_t tam_disciplina = sizeof(cadastro_disciplinas) / sizeof(cadastro_disciplinas[0]);
  size_t tam_pessoa = sizeof(cadastro_professores) / sizeof(cadastro_professores[0]);

  int pont = 0;

  if(qtd_professores > 0 && qtd_disciplinas > 0) {

    for(int i=0; i < tam_disciplina; i++) {

        if(pont ==0){

            for(int j=0; j < tam_individuo; j++) {

                if(strcmp(cadastro_disciplinas[i].professor, cadastro_professores[j].nome) ==0) {

                    pont =1;
                    break;
                }
            }
        }

        if(pont == 1) {

            return 1;
            break;

        }
    }
  } else
     return -1;

}

int validSemestre(char semestre){

if(semestre == '1' || semestre == '2') {

   retrun 1;
   }else {
        return -1;
   }
}


