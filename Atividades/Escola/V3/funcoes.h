
#define TAM 50

typedef struct regtrs_1 { // dados 1

char dat_nasc[TAM]; // data nascimento
char matricula[TAM]; // matricula
char nome[TAM];
char cpf[TAM];
char sex[1]; // sexo


}Pessoa; // Individuo

 typedef struct regtrs_2 {

    char dat_nasc_tempor[TAM]; // data_nascimento_temp[TAM];
    char matricula_tempor[TAM]; // matricula_temp[TAM];
    char nome_tempor[TAM]; // nome_temp[TAM];
    char cpf_tempor[TAM]; // cpf_temp[TAM];
    char sexo_tempor[TAM]; // sexo_tem[TAM];


 }Pessoa_tempor; // Individuo_temp

 typedef struct regtrs_3 {

     char nome[TAM];
     char prof[TAM]; // professor[TAM]
     int idt_prof[TAM]; // id_professor
     char codigo[TAM];
     int semestre;
     int qtd_aluns_disc; // quantidade_alunos_disciplina
     Pessoa aluno[TAM];
 } Disciplina;

  struct tmp* temp_at; // tempo_atual tm

 // menu
 int pageHome(int selecao); // int escolha

 // metodos para individuos
 void cadastrarPessoa(int quantidade, Pessoa cadastro[]); // cadastrarIndividuo
 void listarPessoa(int quantidade, Pessoa cadastro[]); // listaIndividuo
 void alterarPessoa(int quantidade, Pessoa cadastro[]); // alterarIndividuo
 void  removerPessoa(int quantidade, Pessoa cadastro[]); // removerIndividuo
 void listarPessoaSexo(int quantidade, Pessoa cadastro[]); //listarIndividuoSexo
 void  listarPessoaPorNome(int quantidade, Pessoa cadastro[]); // listarIndividuosortPorNome
 void  listarBuscaNome(int qtd_alunos,Pessoa cadastro[]); // listarProcuraNome
 void  listarPessoaSorteioPorData(int quantidade, Pessoa cadastro[], Pessoa_temp_at, cadastro_temp_at[]);//  listarIndividuosSortPorData
 void  listarAniversarios(int qtd_alunos,Pessoa cadastro_alunos[], int qrd_professores,Pessoa cadastro_professores[]);


 // metodos para disciplinas
 void cadastrarDisciplinas(int qtd_professores, int qtd_disciplinas, Disciplina cadastro_disciplinas[], Pessoa cadastro_pessoas[]);
 void listarDisciplinas(int quantidade, Disciplina cadastro[]);
 void alterarDisciplinas(int quantidade, Disciplina cadastro[]);
 void removerDisciplinas(int quantidade, Disciplina cadastro[]);
 void matricularAlunoDisciplinas(int qtd_disciplinas,Disciplina cadastro[]);
 void listarAlunoDisciplinas(int qtd_disciplinas, Disciplina cadastro_disciplinas[], int qtd_professores, Pessoa cadastro_professores[]);
 void removerAlunoDisciplinas(int qtd_disciplinas,Disciplina cadastro_disciplinas[]);
 void listarAlunoDisciplinasMaisde50Vagas(int qtd_disciplinas, Disciplinas cadastro_disciplinas[],int qtd_professores, Pessoa cadastro_professores[]);
 void listarAlunoEmMaisDe1Disciplinas(int qtd_disciplinas, Disciplina cadastro_disciplinas[], int qtd_alunos, Pessoa cadastro_alunos[]); // listarAlunoEMMaisDe3Disciplinas




 //validacoes
int validMatricula(char matricula[]); // validarMatricula)
int validCPF(char cpf[]); // validarCPF
int validNome(char nome[]); // validarNome
int validData(char dat_nasc[]);
int validSex(char sexo);// validarSexo
int validCodigo(char codigo[]);
int validProfessor(int qtd_professores, int qtd_disciplinas, Disciplina cadastro_disciplinas[], Pessoa cadastro_professores[]);
int validSemestre(int semestre);
int validAlunoDisciplina(int qtd_alunos, int qtd_disciplinas, Disciplina cadastro_disciplinas[], Pessoa cadastro_alunos[]);

