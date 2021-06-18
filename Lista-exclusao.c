
#include<stdio.h>
#include<stdlib.h>

typedef struct list{

   int val;
   struct list *prx;
}List;
 // Insere elementos na lista
List* cria_list() {

 return NULL;
}

List* insere_no(List *l, int i) {
    List *novo = (List *)malloc(sizeof(List));

 novo->val = i;
 novo-> prx =l;

  return novo;
}

 void consult_list(List *head) {

     List *ref;

    for(ref=head; ref!= NULL; ref = ref->prx) {
        printf("Valor %d\n",ref->val);
    }
 }

 void varrer_list(List *l, int i){
     List *ref;

     for(ref =l; ref!=NULL; ref = ref ->prx) {
         if(ref-> val == i) {
             printf("Valor que foi encontrado %d\n", i);
         }
     }
 }

  List* remove_no(List *l, int val) {
      List *ant = NULL, *p = l;

      while(p != NULL && p->val!= val){
          ant = p;
          p = p->prx;
      }

      if(p == NULL) {
          return l;
      }
      if(ant == NULL) {
          l = p->prx;
      }
      else{
          ant->prx = p->prx;
      }
      free(p);
      return l;
  }

  int main() {

      List *pi; //pi = ponteiro inicial

      pi = cria_list();
      pi = insere_no(pi,70);
      pi = insere_no(pi,41);
       pi = insere_no(pi,90);
       consult_list(pi);
       int val = 41;
       varrer_list(pi,val);
       pi = remove_no(pi,70);
       consult_list(pi);

       return 0;
  }