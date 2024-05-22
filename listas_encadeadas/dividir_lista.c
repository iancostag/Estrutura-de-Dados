#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
int dado;
struct celula *prox;
} celula;


void divide_lista(celula *l, celula *l1, celula *l2){
  
  while(l->dado != NULL){
    if (l->dado % 2 == 0) {
      l1->dado = l->dado;
      l1 = l1->prox;
    }
    else {
    l2->dado = l->dado;
    l2 = l2->prox;
    }
    l = l->prox;
  }
}

int main(){
  




}
