#include <stdio.h>
#include <stdlib.h>
#include<string.h>


typedef struct cliente
{
    char nome[50];
    char data_Nas[11];
    char cpf[12];
    char sex[1];

}perfil;

void cadastroCliente(perfil *p)
{
   printf("Informe o nome do CLiente:");
    scanf("%s", p->nome);
    printf("Data de Nascimento");
    scanf("%s", p->data_Nas);
    printf("Informe o CPF:");
    scanf("%s", p->cpf);
    printf("Informe o Sexo:");
    scanf("%s", p->sex);

    //return p;

}

int main(void)
{
    perfil perfil_avaliat;

    printf("Dados do Cliente:\n");
    cadastroCliente(&perfil_avaliat);

    printf("NOME: %s \n", perfil_avaliat.nome);
    printf("NASCIMENTO: %s\n", perfil_avaliat.data_Nas);
    printf("CPF: %s\n", perfil_avaliat.cpf);
    printf("SEXO %s\n", perfil_avaliat.sex);

    return 0;

}
