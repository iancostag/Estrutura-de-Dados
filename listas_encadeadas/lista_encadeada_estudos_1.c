#include<stdio.h>
#include<stdlib.h>


typedef int Item;

typedef struct node no{
  struct node{
    Item info;
    no *prox;
  }

};
typedef struct head cabeca{
    struct head{
      int num_itens;
      no *prox;
      no *ultimo;
    }
  };

no *criar_no(Item x){
  no *novo = malloc(sizeof(no));
  novo->prox = NULL;
  novo->info = x;
  return novo;
}
cabeca *criar_lista(){
  cabeca *le = malloc(sizeof(cabeca));
  le->num_itens = 0;
  le->prox = NULL;
  le->ultimo= NULL;
  return le;
}
void inserir_depois(cabeca *lista,no *ref,no *elem){
  elem->prox = ref->prox;
  ref->prox = elem;
  //metadados
  lista->num_itens++;
  if(elem->prox == NULL) lista->ultimo = elem;
}

int main (void) {
   printf ("sizeof (celula) = %d\n", 
            sizeof (no));
   return EXIT_SUCCESS;
}











