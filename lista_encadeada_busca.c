#include <stdio.h>

typedef struct reg{
int dado;
struct reg *prox;
}celula;


typedef struct celula celula;
struct celula{
	int dado;
	celula *prox;
};
celula busca(celula *celula, int x){
  while (celula->prox != null && celula->dado != x) {
    celula = celula->prox;
  }
  return x; 



}




int main(void){
printf ("sizeof (celula) - %d\n", sizeof(celula));
printf ("sizeof(celula.reg *prox)-%d\n",sizeof(celula.reg));
}
