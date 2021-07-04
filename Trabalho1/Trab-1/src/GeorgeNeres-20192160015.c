// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome:
//  email:
//  Matrícula:
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "GeorgeNeres-20192160015.h" // Substitua pelo seu arquivo de header renomeado

/*
## função utilizada para testes  ##

 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##

 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
    int fat = x;
    return fat;
}

/* int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
} */

/*typedef struct DQ
{
    char sDia [3];
    char sMes [3];
    char sAno [3];
    int valido; // 0 se inválido, e 1 se válido 

} DataQuebrada;

DataQuebrada quebraData(char *data){
    //[ 1 , 2  ,  /  ,    ,   ,  /  ,    ,     ,    ,      ,]

}*/
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char *data){
	char ano[11];
	char diaStr[3];
	char mesStr[3];
	char anoStr[5];
	int tamanho_dia = 0;
	int tamanho_mes = 0;
	int tamanho_ano = 0;
	int contagem_mes = 0;
	int contagem_ano = 0;
	int diaInt;
	int mesInt;
	int anoInt;

	int i = 0;

	while (data[i] != '/'){

		diaStr[i] = data[i];

		if(i > 1){
			return 0;
		}

		 if (diaStr[i] < 48 || diaStr[i] > 57){

			return 0;

		 }

		i++;
	}

	diaStr[i] = '\0';
	i++;


	tamanho_dia = strlen(diaStr);

	if(tamanho_dia == 0){

		return 0;

	}

	diaInt = atoi(diaStr);

	int j = i;

	while (data[j] != '/'){

		mesStr[j] = data[j];

		if(contagem_mes > 1){
			return 0;
		}

		 if (mesStr[j] < 48 || mesStr[j] > 57){

			return 0;

		 }

		j++;
		contagem_mes++;
	}

	mesStr[j] = '\0';
	j++;

	tamanho_mes = strlen(mesStr);

	if(tamanho_mes == 0){

		return 0;

	}

	mesInt = atoi(mesStr);

	int k = j;

	while (data[k] != '\0'){

		anoStr[k] = data[k];

		 if (anoStr[k] < 48 || anoStr[k] > 57){

			return 0;

		 }

		k++;
		contagem_ano++;
	}

	if(contagem_ano != 2 && contagem_ano != 4){
		return 0;
	}

	anoStr[contagem_ano] = '\0';

	tamanho_ano = strlen(anoStr);

	anoInt = atoi(anoStr);

	 if ((diaInt < 1 || diaInt > 31) || (mesInt < 1 || mesInt > 12) || (anoInt < 1 || anoInt > 2021)) 
	        return 0;

	    if (diaInt > 30 && (mesInt == 4 || mesInt == 6 || mesInt == 9 || mesInt == 11) )
	        return 0;

	    if (diaInt > 29 && (mesInt == 2 && anoInt % 4 == 0 || anoInt % 400 == 0 && anoInt % 100 != 0) )
	        return 0;

	    if (diaInt > 28 && (mesInt == 2 && anoInt % 4 != 0 || anoInt % 400 != 0 && anoInt % 100 == 0) )
	        return 0;

	 return 1;

}




/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */

int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{

	char diaStr[3];
	char mesStr[3];
	char anoStr[5];
	int num_dias, num_mes, num_anos;
	int tamanho_mes = 0, tamanho_ano = 0, tamanho_data_inicial = 0;
    int diaIntInicial, mesIntInicial, anoIntInicial;
    int diaIntFinal, mesIntFinal, anoIntFinal;


   if(q1(datainicial) == 0) {
       return 2;
   } else if(q1(datafinal) == 0) {
       return 3;
   }

   int i = 0;

   while(datainicial[i] != '/'){

	   diaStr[i] = datainicial[i];

	   i++;
   }

   diaStr[i] = '\0';
   i++;

   int j = i;

   while(datainicial[j] != '/'){

	   mesStr[j] = datainicial[j];

	   j++;
   }

   mesStr[j] = '\0';
   tamanho_mes = strlen(mesStr);
   j++;

   int k = j;

	while(datainicial[k] != '\0'){

		anoStr[k] = datainicial[k];

		k++;

	}

	tamanho_ano = strlen(anoStr);

	anoStr[tamanho_ano] = '\0';

	diaIntInicial = atoi(diaStr);
	mesIntInicial = atoi(mesStr);
	anoIntInicial = atoi(anoStr);

	int l = 0;

   while(datafinal[l] != '/'){

	   diaStr[l] = datafinal[l];

	   l++;
   }

   diaStr[l] = '\0';
   l++;

   int m = l;

   while(datafinal[m] != '/'){

	   mesStr[m] = datafinal[m];

	   m++;

   }

   tamanho_mes = strlen(mesStr);
   mesStr[m] = '\0';
   m++;

   int n = m;

	while(datafinal[n] != '\0'){

		anoStr[n] = datafinal[n];

		n++;
	}
	tamanho_ano = strlen(anoStr);

	anoStr[tamanho_ano] = '\0';

	diaIntFinal = atoi(diaStr);
	mesIntFinal = atoi(mesStr);
	anoIntFinal = atoi(anoStr);

	if (anoIntFinal < anoIntInicial || (anoIntFinal == anoIntInicial && mesIntFinal < mesIntInicial) || (anoIntFinal == anoIntInicial && mesIntFinal == mesIntInicial && diaIntFinal < diaIntInicial))
	        return 4;

	int mesFinalAnterior = mesIntFinal - 1;

	if (diaIntFinal < diaIntInicial){

		if (mesFinalAnterior == 2){

			if (anoIntFinal % 4 == 0 || anoIntFinal % 400 == 0 && (anoIntFinal % 100 != 0) )
				diaIntFinal += 29;
			else
				diaIntFinal += 28;
		}

		if (mesFinalAnterior == 4 || mesFinalAnterior == 6 || mesFinalAnterior == 9 || mesFinalAnterior == 11)
			diaIntFinal += 30;
		else
			diaIntFinal += 31;

		diaIntFinal--;
	}

	if (mesIntFinal < mesIntInicial){

		mesIntFinal += 12;
		anoIntFinal--;
	}

	num_dias = diaIntFinal - diaIntInicial;
	num_mes = mesIntFinal - mesIntInicial;
	num_anos = anoIntFinal - anoIntInicial;

	/*mantenha o código abaixo, para salvar os dados em
	nos parâmetros da funcao
	*/
	*qtdDias = num_dias;
	*qtdAnos = num_mes;
	*qtdMeses = num_anos;

	//coloque o retorno correto
	return 1;


}
/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive)
{
    int qtdOcorrencias = 0;
    int tamanho_str = 0;

    tamanho_str = strlen(texto);

     if (isCaseSensitive == 1){

    	 int i = 0;

		 while ( i < tamanho_str){

			 if (texto[i] == c){

				 qtdOcorrencias++;

			 }

			 i++;
		 }
     }

	 if (isCaseSensitive != 1){

		 int i = 0;

		 while(i < tamanho_str){

			 if (texto[i] == toupper(c) || texto[i] == tolower(c)){
				 qtdOcorrencias++;
			 }
			 i++;
		 }
	 }

    return qtdOcorrencias;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;

 */
int q4(char *strTexto, char *strBusca, int posicoes[30])
{

	int i = 0, j = 0, k = 0;
	int acentos = 0, tamanho_texto, tamanho_busca;

	tamanho_texto = 0;

	tamanho_texto = strlen(strTexto);

     tamanho_busca = 0;

     tamanho_busca = strlen(strBusca);

    i = 0;

	while(i < tamanho_texto){

	   if(strBusca[0] == strTexto[i]){

		   while(strBusca[j] == strTexto[i]){
			 i++;
			 j++;
		  }

		  if(j == tamanho_busca){

			posicoes[k] = i - (tamanho_busca - 1) - acentos;
			k++;

			posicoes[k] = i - acentos;
			k++;
		  }

		  j = 0;
	   }

	   if(strTexto[i] < 0 && strTexto[i + 1] < 0)
		   acentos++;

	   i++;
	}

	int qtdOcorrencias = 0;

	qtdOcorrencias = k / 2;

	return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{
	int invertido = 0;
	int aux;

	while(num > 0){

		aux = num % 10;//123

		invertido = invertido * 10 + aux;

		num = num / 10;

	}

	return invertido;
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca)
{
	int aux;
	int qtdOcorrencias = 0;
	int tamanho = 1;

	for (aux = numerobusca; aux != 0, aux /= 10;){

		tamanho *= 10;

	}

	for (aux = numerobase; aux != 0;){

	   if (aux % tamanho == numerobusca){

			qtdOcorrencias++;
			aux /= tamanho;

	   }else{

		   aux /= 10;

		}
	}

	return qtdOcorrencias;

}
