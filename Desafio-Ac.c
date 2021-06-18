#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int valor;
	struct lista *prox;
}Lista;

Lista* cria_lista(){
	return NULL;
}

Lista* insere_no(Lista *l, int i){
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	
	novo->valor= i; // (*novo).valor
	novo->prox= l;
	
	return novo;
}

void consulta_lista(Lista *head){
	Lista *ref;
	
	for(ref= head;ref!= NULL;ref= ref->prox){
		printf("Valor: %d\n", ref->valor);
    }
}
void busca_lista(Lista *l, int i){
	Lista *ref;
	
	for(ref= l;ref!= NULL;ref= ref->prox){
		if (ref->valor==i){
			printf("valor encontrado %d\n", i);
		}
	}	
	
}
Lista* remove_no(Lista *l,int valor){
	Lista *ant = NULL,*p = l;

	while(p != NULL && p->valor!= valor){
		ant = p;
		p = p->prox;
	}
	if(p == NULL){
		return l;
	}
	if(ant == NULL){
		l = p->prox;
	}
	else{
		ant->prox = p->prox;
	}
	free(p);
	return l;
}
int main(){
	Lista *pi; // pi = ponteiro inicial
	
	pi = cria_lista();
	pi = insere_no(pi, 78);
	pi = insere_no(pi, 81);
	pi = insere_no(pi, 85); //pi -> no85 ->  no81 -> no78 -> NULL 
	consulta_lista(pi);
	int valor= 85;
	busca_lista(pi,valor);
	pi = remove_no(pi,81);
	consulta_lista(pi);
	// libera��o da lista
	// verificar se a lista est� vazia
	// criar a fun��o para entrada dos valores da lista
	return 0;
}