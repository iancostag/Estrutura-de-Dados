#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
   int dado;
   int qtd;
   struct celula *prox;
   struct celula *ant;
} celula;

celula *busca(celula *le, int x){
   while(le != NULL && le->dado != x)
      le = le->prox;
   return le;
}

celula *busca_rec(celula *le, int x){
   if(le==NULL) return NULL;
   if(le->dado == x) return le;
   return busca_rec(le->prox,x);
}

/*celula *concatenar(celula *l1, celula *l2){
   celula *aux;
   while(l1 != NULL)
      aux = l1->prox;
   aux = l1->ant;
   aux->prox = l2;
}*/

int altura(celula *r){
   if (r == NULL) return -1; 

   int esquerda = altura(r->ant);
   int direita = altura(r->prox);

   if (esquerda > direita) r->qtd = esquerda +1;

   else  r->qtd = direita+1;   
   printf("%d", r->qtd);
   return r->qtd;
}

celula *criaCelula(int x){
   celula *cel = malloc(sizeof(celula));
   cel->prox = NULL;
   cel->ant = NULL;
   cel->dado = x;
   cel->qtd = 0;
   return cel;
}
void imprime (celula *le) {
   if (le != NULL) {
      printf ("%d -", le->prox->dado);
      imprime (le->prox);
   }
}


int main(){
   celula *le = criaCelula(0);
   celula *aux = le;
   for (int i = 0; i < 10; i++)
   {
      aux->prox = criaCelula(i);
      aux = aux->prox;
   }
   altura(le);
   

}

// concaternar duas listas  vale 2,5 l1, l2
// tamanho da subarvore de cada nó, armazenar numa variavel da struct le.qtd = subarvore
//  
// esteira