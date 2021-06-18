//----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome:
//  email:
//  Matrícula:
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
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
    int fat = 1;
    return fat;
}
// struct para recebeer os dias,mes,Ano
/*typedef struct DQ
{
    char sDia[3];
    char smes [3];
    char sAno[3];
    int valido ; // 0 se invalido, e 1 valido
} DataQuebrada;
 
DataQuebrada quebraData(char  *data) {
 //[ ,   ,  / ,    ,   /   ,      ,      ,      ,]
 
  
}
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

     //int datavalida = 1;
    //printf("%s\n",data);
    //quebrar a string data em strings sDia, sMes, sAno
      
 // DataQuebrada quebraData = quebraData(data); // (struct)passo a data
// chamar a função quebrar Data

    //converter sDia, sMes e sAno em inteiros (ex: atoi)

    //criar as variáveis iDia, iMes, iAno

    //printf("%s\n", data);
 */
 int valid_num(int dia, int mes,int ano);

 int identifique_car(char caract);

 int q1(char *data)
{
    char sDia[3];
    char sMes[3];
    int i;
    int let_dia =0;

   for(i =0; data[i] !='/'; i++) {

      sDia[i] = data[i];

       if(i > 1)
         return 0;
     
     if(identifique_car(sDia[i]) == 1)
     return 0;
   }

   sDia[i] = '\0';
   i++;

   for(int c= 0; sDia[c] != '\0'; c++)
       let_dia++;
    
    if(let_dia == 0)
   
     return 0;
  
     int iDia = atoi(sDia);
     

     
   char sMes[3];
   int j;
   int let_mes =0; // len_mes
   int cont_Mes =0;

   for(j = i; data[j] != '/'; j++, cont_Mes++) {

       sMes[cont_Mes] = data[j];
   }
    if (cont_Mes > 1) 
       return 0;
    
    if(identifique_car(sMes[cont_Mes]) == 1){
    return 0;

    }

    sMes[j] = '\0';
    j++;

    for(int y =0; sMes[y] != '\0'; y++)
    let_mes++;

    if(let_mes == 0)
    return 0;

 int iMes = atoi(sMes);


int let_ano = 0;
int cont_Ano = 0;
char sAno[5];

for(int z = 0; data[z] != '\0'; z++){
   let_ano++;
    
   for(i = j; i < let_ano; i++, cont_Ano++) {

      sAno[cont_Ano] = data[i];

       if(identifique_car(data[i]) == 1)
       return 0;
   }

     if(cont_Ano != 2 && cont_Ano != 4)
      return 0;

      sAno[cont_Ano] = '\0';

      int iAno = atoi(sAno);

         int retorno = valid_num(iDia, iMes, iAno);

         return retorno;

   }

int valid_num(int dia, int mes, int ano) {

  if((dia < 1 || dia > 31)  ||  (mes < 1 || mes > 12) || (ano < 1 || ano > 2021))
  return 0;
   
   if(dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11) )
   return 0;

    if(dia > 29 && (mes == 2 && ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0))
     return 0;
     if(dia > 28 && (mes == 2 && ano % 4 != 0 || ano % 400 != 0 && ano % 100 == 0) )
     return 0;

     return 1;
  }

  int identifique_car (char caract) {

     if(caract < 48 || caract > 57)
       return 1;
    else 
        return 0;
  }
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

    //calcule os dados e armazene nas três variáveis a seguir
      char sDia[3], sMes[3], sAno[5];
    int nDias, nMeses, nAnos;

    if (q1(datainicial) == 0)
        return 2;
    if(q1(datafinal) == 0)
      return 3;

     int i;
     int j;
     int let_mes =0;
    for (i=0; datainicial[i] != '/'; i++)
       sDia[i] = datainicial[i];

       sDia[i] = '\0';
       i++;

       for(i = 0; datainicial[i] != '/'; i++)
         sDia[i] = datainicial[i];

         

     for(j = i; let_mes = 0; datainicial[j] != '/'; j++, let_mes++)
       sMes[let_mes] = datainicial[j];

       sMes[j] = '\0';
       j++;

       int let_ano = 0;
       int let_dat_inicial =0;

    for(int c = 0; datainicial[c] != '\0'; k++)
        let_dat_inicial++;

      for(i = j, let_ano = 0; i < let_dat_inicial; i++, let_ano)
        sAno[let_ano] = datainicial[i];

   sAno[let_ano] = '\0';
    j++;

     int let_ano = 0;

     int let_dat_inicial = 0;

     for(int c=0; datainicial[c] != '\0'; c++)
         let_dat_inicial++;

      for(i = j; let_ano = 0; i < let_dat_inicial; i++, let_ano++)
         sAno[let_ano] = datainicial[i];

      sAno[let_ano] = '\0';

      int iDiainicial = atoi(sDia);
       int iMesinicial = atoi(sMes);
        int iAnoinicial = atoi(sAno);


    for(i = 0; datafinal[i] != '/'; i++)
        sDia[i] = datafinal[i];

     sDia[i] = '\0';
     i++;

      for(j = i, let_mes = 0; datafinal[j] != '/'; j++, let_mes++)
        sMes[let_mes] = datafinal[j];

      sMes[j] = '\0';
      j++;

    int let_dat_final = 0; // eln_data_final

      for(int c = 0; datafinal[c] != '\0'; c++)
      sAno[let_ano] = datafinal[i];

    sAno[let_ano] = '\0';

    int iDiaFinal = atoi(sDia);
    int iMesFinal = atoi(sMes);
    int iAnoFinal = atoi(sAno);

     if(iAnoFinal < iAnoinicial || (iAnoFinal == iAnoinicial && iMesFinal)|| (iAnoFinal == iAnoinicial && iMesFinal == iMesinicial && iDiaFinal < iDiainicial))
    return 4;

    int mesFinalAnterior = iMesFinal - 1;

    if(iDiaFinal < iDiainicial)

     if(mesFinalAnterior == 2){

        if(mesFinalAnterior == 2) {

           if(iAnoFinal % 4 == 0 || iAnoFinal % 400 == 0 && (iAnoFinal % 100 != 0))
            iDiaFinal + = 29;
            else 
               iDiaFinal += 28;
        }

        if(mesFinalAnterior == 4 || mesFinalAnterior == 6 || mesFinalAnterior == 9 || mesFinalAnterior == 11)
        iDiaFinal +=30;
        else 
          iDiaFinal += 31;

          iMesFinal --;
     }

       if(iMEsFInal < iMesInicial) {

         iMesFinal += 12;
         iAnoFinal--;
       }
 
       nDias = iDiaFinal - iDiainicial;
       nMeses = iMesFinal - iMesinicial;
       nAnos = iAnoFinal - iAnoinicial;

   return 1;
   
}
    /*mantenha o código abaixo, para salvar os dados em 
    nos parâmetros da funcao
    */
   // *qtdDias = nDias;
   // *qtdAnos = nAnos;
   // *qtdMeses = nMeses;

    //coloque o retorno correto
   // return 1; 
// } 


/* Q3 = encontrar caracter em texto
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
    //[  ,   ,     ,      ,      ,      ,    ,      ,     ,   ]
   /*int qtdOcorrencias = 0;
   char caract[250]; // Vai faze a busca de caracteres
   int i,j;
   int text = 0;
    
    for(i=0; i < texto[i]!= '\0'; i++) {
       caract[i] = texto[i];
       
    } 
     
    return qtdOcorrencias;
    */

 int qtdOcorrencias = 0;
   char a[100]; // Vai faze a busca de caracteres
   char b[100];
   for(int i=0; texto[i] !='\0'; i++){
     for(int j=0; texto[j] != '\0'; j++){
       if((texto[i] >= 'A') && (texto[i] <= 'Z')) {
         if((texto[j] >= 'A') && (texto[j] <= 'Z')) {
          if(texto[i] == texto[j] && j != i ) {
              qtdOcorrencias++; // vai contabilixar quantos caracteres repetidos
              break;
           a[i] = texto[i];
           b[i] = texto[i] + 32; // Somando a posicao do A ate o Z
           a[j] = texto[i];
           b[j] = texto[j] + 32;
          }
       }
    }
    
     if((texto[i] >= 'a') && (texto[i] <='z')) {
     if((texto [j] >= 'a') && (texto[j] <= 'z')) {

        a[i] = texto[i] - 32;
        b[i] = texto[i];
        a[j] = texto[j] - 32;
        b[j] = texto[j];
         }
     }
      else {
          a[i] = texto[i];
          b[i] = texto[i];
          a[j] = texto[j];
          b[j] = texto [j];
      }
   
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
    
  
   int i=0;
   int j =0;
   int c = 0;

   int cact_acent = 0; // acentos

   int let_text = 0;

   for(int x = 0; strTexto[x] != '\0'; x++) {
       let_text++;

     
    for(int y = 0; y < strBusca[y] != '\0'; i++) {
       int let_busc = 0;
       let_busc++;

     for(int i = 0; i < let_text; i++) {
         if(strBusca[0] == strTexto[i]) {

         while(strBusca[j]== strTexto[i]) {
         i++;
         j++;
    }
        if(j == let_busc) {
             
         posicoes[c] = i - (let_busc - 1)- cact_acent;
         c++;

         posicoes[c] = i - cact_acent;
         c++;
           }
           j = 0;
         }
         if(strTexto[i] <0 && strTexto[i + 1] < 0)
           cact_acent++;
      }
      int qtdOcorrencias =1;

      qtdOcorrencias = c/2;

      return qtdOcorrencias;
     }
   }
    
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
  int pos_inv = 0;
  int temporar;
    
    while(num > 0) {

      temporar = num %10;
       
       pos_inv = pos_inv * 10 + temporar;
       num = num / 10;

    }
    return pos_inv;
}

/*
 Q5 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca)
{
    int tempor;
    int tam = 1;
    int qtdOcorrencias;

    tempor = numerobusca;

    while(tempor != 0) {

       tam *= 10;
       tempor /= 10;
    }

   tempor = numerobase; 

   while(tempor != 0) {

     if(tempor % tam == numerobusca) {

        qtdOcorrencias++;
        tempor /= tam;
     } else 
         tempor /= 10;
     }
     
    return qtdOcorrencias;
}