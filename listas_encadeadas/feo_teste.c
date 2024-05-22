#include<stdio.h>
#include<stdlib.h>


typedef struct reg celula; //permite que reg seja chamada por celula;
  struct reg{   // declaração da struct reg
    int dado;
    celula *prox;
  };
void imprime(celula *le){
  if(le != NULL){
  printf("%d\n",le->conteudo);
  imprime(le->prox);
  }
}
//exercicio 2 feofiloff:func que conta o numero de celulas de uma lista
int conta_cel_rec(celula *le){
  if(le!=NULL){
    return conta_cel_rec(le->prox) + 1;
  }
  return 0;
}

int conta_cel_ite(celula *le){
  


}




int main(void){
  printf("sizeof(celula) = %d\n",sizeof(celula));
  return EXIT_SUCCESS;
}

// o endereço de uma lista encadeada é o endereço da primeira celula
// logo, se le é o endereço da lista, simplesmente dizemos que le é uma lista encadeada;
// lista encadeadas são naturalmente recursivas, se le é uma lista não vazia então le->prox também é uma lista
// muitos algoritmos relacionados a listas encadeads ficam mais simples quando são escritos recursivamente.




