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
// Última atualização: 07/05/2021

// #################################################
#ifndef GEORGE_NERES_HEADER
#define GEORGE_NERES_HEADER

#include <wchar.h>

int somar(int x, int y); //função utilizada para testes
int fatorial(int x); //função utilizada para testes
int q1(char *data);
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos);
int q3(wchar_t *texto, wchar_t c, int isCaseSensitive);
int q4(wchar_t *strTexto, wchar_t *strBusca, int posicoes[30]);
int q5(int num);
int q6(int numerobase, int numerobusca);

void coletaDatan(char *data, int *dia, int *mes, int *ano);
void retiraAcentos(wchar_t *str);

#endif  // TRABALHO1_PRIMEIROULTIMONOMEMATRICULA_H
