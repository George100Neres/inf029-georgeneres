
#include <stdio.h>
#include <stdlib.h>


#include "EstruturaVetores.h"

EstruturaPrincipal vetorPrincipal[TAM];


/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'
Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho tem inteiro maior ou igual a 1
*/
int criarEstruturaAuxiliar(int posicao, int tamanho)
{

	  if (tamanho < 1){

		  return TAMANHO_INVALIDO;

	  }else if (ehPosicaoValida(posicao)){

		  return POSICAO_INVALIDA;

	  }else if (vetorPrincipal[posicao].ponteiroAux != NULL){

		  return JA_TEM_ESTRUTURA_AUXILIAR;

	  }

	  vetorPrincipal[posicao].ponteiroAux = (int*)malloc(tamanho*sizeof(int));

	  if (vetorPrincipal[posicao].ponteiroAux == NULL){

	      return SEM_ESPACO_DE_MEMORIA;

	  }else{

		  vetorPrincipal[posicao].tamanhoAux = tamanho;
		  return SUCESSO;

	  }



}

/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/
int inserirNumeroEmEstrutura(int posicao, int valor)
{
	int quantidade;

    if (ehPosicaoValida(posicao)){

    	return POSICAO_INVALIDA;

    }else if(vetorPrincipal[posicao].ponteiroAux == NULL ){

        return SEM_ESTRUTURA_AUXILIAR;

    }

    quantidade = vetorPrincipal[posicao].quantidadeAux;

    if (quantidade >= vetorPrincipal[posicao].tamanhoAux){

    	return SEM_ESPACO;

    }else{

		vetorPrincipal[posicao].ponteiroAux[quantidade] = valor;
		vetorPrincipal[posicao].quantidadeAux++;
		return SUCESSO;

    }

}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao)
{
	 if (ehPosicaoValida(posicao) == 1){

		 return POSICAO_INVALIDA;

	 }else if (vetorPrincipal[posicao].ponteiroAux == NULL){

	     return SEM_ESTRUTURA_AUXILIAR;

	 }else if (vetorPrincipal[posicao].quantidadeAux == 0){

	        return ESTRUTURA_AUXILIAR_VAZIA;

	 }else{

	    vetorPrincipal[posicao].quantidadeAux--;
	    return SUCESSO;

	 }
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
	int isPresent = 0;
	int temp;
	int quantidade;
	int i;

	if (ehPosicaoValida(posicao)){

		return POSICAO_INVALIDA;

	}else if (vetorPrincipal[posicao].ponteiroAux == NULL){

		return SEM_ESTRUTURA_AUXILIAR;

	}else if (vetorPrincipal[posicao].quantidadeAux == 0){

		return ESTRUTURA_AUXILIAR_VAZIA;

	}

	quantidade = vetorPrincipal[posicao].quantidadeAux;

	if (quantidade == 1 && vetorPrincipal[posicao].ponteiroAux[0] == valor){

		isPresent = 1;

	}else{

		for (i = 0; i < quantidade - 1; i++){

			if (vetorPrincipal[posicao].ponteiroAux[i] == valor){

			  temp = vetorPrincipal[posicao].ponteiroAux[i];
			  vetorPrincipal[posicao].ponteiroAux[i] = vetorPrincipal[posicao].ponteiroAux[i+1];
			  vetorPrincipal[posicao].ponteiroAux[i+1] = temp;

			  isPresent = 1;
			}
		}

	}

	if (isPresent == 0){

		return NUMERO_INEXISTENTE;

	}else{

		vetorPrincipal[posicao].quantidadeAux--;
		return SUCESSO;
	}
}

// se posição é um valor válido {entre 1 e 10}
int ehPosicaoValida(int posicao)
{
	if (posicao > TAM || posicao< 1){

	  return 1;

	}else{

	  return 0;

	}
}
/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

void getDadosAux(int posicao, int vetorAux[], int n){

	int i = 0;

	while (i < n){

		vetorAux[i] = vetorPrincipal[posicao].ponteiroAux[i];

		i++;

	}

}

int getDadosEstruturaAuxiliar(int posicao, int vetorAux[]){

	int quantidade;

    if (ehPosicaoValida(posicao)){

        return POSICAO_INVALIDA;

    }else if (vetorPrincipal[posicao].ponteiroAux == NULL){

        return SEM_ESTRUTURA_AUXILIAR;

    }else{

		quantidade = vetorPrincipal[posicao].quantidadeAux;

		getDadosAux(posicao,vetorAux, quantidade);

		return SUCESSO;
    }

}


/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

void organiza(int vetorAux[], int n){

    int aux;
    int i, j;

    for (i = 0; i < n; i++){

        for (j = i + 1; j < n; j++){

            if(vetorAux[i] > vetorAux[j]){

                aux = vetorAux[i];
                vetorAux[i] = vetorAux[j];
                vetorAux[j] = aux;

            }
        }
    }

}

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
	int quantidade;

	 if (ehPosicaoValida(posicao)){

		 return POSICAO_INVALIDA;

	 }else if (vetorPrincipal[posicao].ponteiroAux == NULL){

		 return SEM_ESTRUTURA_AUXILIAR;

	 }else{

		quantidade = vetorPrincipal[posicao].quantidadeAux;
		getDadosAux(posicao, vetorAux, quantidade);
		organiza(vetorAux, quantidade);

		return SUCESSO;

	 }


}

/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
	if (todasEstruturasAuxiliaresVazias()){

		return TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

	}

	int quantidade;
	int k = 0, i , j;

	for (i = 0; i < TAM; i++){

		if (vetorPrincipal[i].ponteiroAux != NULL){
			quantidade = vetorPrincipal[i].quantidadeAux;

			for (j = 0; j < quantidade; j++, k++){

				 vetorAux[k] = vetorPrincipal[i].ponteiroAux[j];

			}
		}
	}

	return SUCESSO;
}

/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
*/

int todasEstruturasAuxiliaresVazias(){

    int vazia = 0;

    for (int i = 0; i < TAM; i++){

        if (vetorPrincipal[i].quantidadeAux == 0){

            vazia++;
        }
    }

    if (vazia == TAM){

        return 1;

    }
    return 0;
}



int getContadorTodasEstruturaAuxiiares(){

  int contador = 0;
  int i;

    for (i = 0; i < TAM; i++){

        if (vetorPrincipal[i].ponteiroAux != NULL){

            contador += vetorPrincipal[i].quantidadeAux;

        }
    }

    return contador;
}

int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

	 if (todasEstruturasAuxiliaresVazias() == 1){

	    return TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

	 }else{

	    getDadosDeTodasEstruturasAuxiliares(vetorAux);

	    int n = getContadorTodasEstruturaAuxiiares();

	    organiza(vetorAux, n);

	    return SUCESSO;
	 }
}


/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{
	int quantidade;

	 if (ehPosicaoValida(posicao)){

		 return POSICAO_INVALIDA;

	 }


	if (vetorPrincipal[posicao].ponteiroAux == NULL){

		return SEM_ESTRUTURA_AUXILIAR;

	}

	novoTamanho += vetorPrincipal[posicao].tamanhoAux;

	if (novoTamanho < 1){

		return NOVO_TAMANHO_INVALIDO;

	}else{

		vetorPrincipal[posicao].ponteiroAux = (int*)realloc(vetorPrincipal[posicao].ponteiroAux, novoTamanho * sizeof(int));

	}

	if (vetorPrincipal[posicao].ponteiroAux == NULL){

		return SEM_ESPACO_DE_MEMORIA;

	}else{


		vetorPrincipal[posicao].tamanhoAux = novoTamanho;

		quantidade = vetorPrincipal[posicao].quantidadeAux;

		if (quantidade > novoTamanho){

			vetorPrincipal[posicao].quantidadeAux = novoTamanho;

		}else{

			vetorPrincipal[posicao].quantidadeAux = quantidade;

		}

		return SUCESSO;

	}
}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/
int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{
	int quantidade;

	 if (ehPosicaoValida(posicao)){

		 return POSICAO_INVALIDA;

	 }else if (vetorPrincipal[posicao].ponteiroAux == NULL){

	        return SEM_ESTRUTURA_AUXILIAR;

	 }else if (vetorPrincipal[posicao].quantidadeAux == 0){

	        return ESTRUTURA_AUXILIAR_VAZIA;

	 }else{

	    quantidade = vetorPrincipal[posicao].quantidadeAux;
	    return quantidade;

	 }
}


//Inserir novo valor no final da lista
int inserirNaLista(No *inicio, int valor){



}

/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.
RetorPrincipal (Principal*)
    NULL, caso não tenha nenhum número nas listas
    Principal*, ponteiro para o início da lista com cabeçote
*/
No* montarListaEncadeadaComCabecote(){



}


/*
Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
RetorPrincipal void
*/
void getDadosListaEncadeadaComCabecote(No* inicio, int vetorAux[]){



}

/*
Objetivo: Destruir a lista encadeada com cabeçote a partir do início.
*/
void destruirListaEncadeadaComCabecote(No** inicio){


}

/*
Objetivo: inicializa o programa. deve ser chamado ao inicio do programa
*/
void inicializar(){
	int i;

	for (i = 0; i < TAM; i++){
		vetorPrincipal[i].ponteiroAux = NULL;
		vetorPrincipal[i].quantidadeAux = 0;
		vetorPrincipal[i].tamanhoAux = 0;
	}
}
/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa
para poder liberar todos os espaços de memória das estruturas auxiliares.
*/

void finalizar()
{

	for(int i = 0; i < TAM; i++){

	     free(vetorPrincipal[i].ponteiroAux);

	}

}
