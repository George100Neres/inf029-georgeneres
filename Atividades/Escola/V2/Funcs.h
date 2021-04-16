
#include<stdio.h>
#include<stdlib.h>

#define TAM 5

typedef struct regtrs_1 { // dados 1

char dat_nasc[TAM]; // data nascimento
char matricula[TAM]; // matricula
char nome[TAM];
char cpf[TAM];
char sex[TAM]; // sexo


}Pessoa; // Individuo

typedef struct regtrs_2{

	char nome[TAM];
	char semestre[TAM];
    char codigo[TAM];
	char professor[TAM];

} Disciplina

// menu

int pageHome(int selecao); // PaginaPrincipal (int escolha)

// metodos

void cadastrarPessoa(int quantidade, Pessoa cadastro[]);// Cadastrar Individuo
void listarPessoa(int quantidade, Pessoa cadastro[]); // listarIndividuo
void cadastrarDisciplinas(int qtd_professores, int qtd_disciplinas, Disciplina cadastro_disciplinas[], Pessoa cadastro_individuos[]);
void listarDisciplinas (int quantidade, Disciplina cadastro[]);

//validacoes
int validMatricula(char matricula[]); // validarMatricula)
int validCPF(char cpf[]); // validarCPF
int validNome(char nome[]); // validarNome
int validData(char dat_nasc[]);
int validSex(char sexo);// validarSexo
int validCodigo(char codigo[]);
int validProfessor(int qtd_professores, int qtd_disciplinas, Disciplina cadastro_disciplinas[], Pessoa cadastro_professores[]);
int validSemestre(intsemestre);

