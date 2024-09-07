#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
}celula;
 
celula *busca(celula *le,int x){
                                     
    while(le != NULL && le->dado != x){ 
        le = le->prox;         
    }
    
    return le;
}

celula *busca_rec(celula *le,int x){     //recebe a lista e o dado a ser procurado
    if(le==NULL) return NULL;            // se o elemento não existe retorna nulo 
    if(le->dado == x) return le;         //se o dado for igual ao procurado retorna o endereço
    return busca_rec(le->prox,x);        //chama a função novamente para o proximo elemento da lista;
}

celula *criaCelula(int x){
   celula *cel = malloc(sizeof(celula));
   cel->prox = NULL; 
   cel->dado = x;
   return cel;
}

void imprime (celula *le) {
   if (le != NULL) {
      printf("endereco:%d\n",le);
      printf ("dado:%d\n", le->dado);
      imprime (le->prox);
   }
}
int main()
{
celula *cabeca = criaCelula(0);
celula *aux = cabeca;
for (int i = 0; i < 3; i++)
{
    aux->prox = criaCelula(i);
    aux = aux->prox;
}
imprime(cabeca);
printf("terminando impressao\n");

printf("comecando busca:\n");
printf("%d",busca_rec(cabeca,2));
printf("terminando busca\n");

celula *temp;
    while (cabeca->prox != NULL) {
        temp = cabeca->prox;
        cabeca->prox = cabeca->prox->prox;
        free(temp);
    }   
    printf("nos limpados");
    free(cabeca);
    printf("cabeca limpada");
return 0;

}
