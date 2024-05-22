#include <stdio.h>

#define less(A,B) ((A) < (B))
#define exch(A,B) { Item t=A;A=B;b=t;}

static Item *pq
static int N;

void PQinit(int maxN){
  pq = malloc(sizeof(Item)*(maxN +1))
  N = 0;
  }

int PQempty(){
    return N==0;
  }

fixUp(int k){
  while(k>1 && less(pq[k/2],pq[k])){ //verifica se o pai é menor que o filho;
      exch(pq[k],pq[k/2]) // troca o elemento filho de lugar com o pai se ele for maior
      k = k/2; //atualiza o indice do k para o indice se tornar o elemento pai
    }
    //complexidade é log2k+1;
  }
//inserção de elemento
/*Devemos inserir o elemento no final do vetor,logo no v[++N];
 *++N pois devemos aumentar o tamanho do nosso vetor, já que estamos adicionando um elemento
 *E após devemos comparar se esse novo elemento é maior q seu pai
 *fazemos isso para consertar a nossa fila de prioridade
 * e garantir q o elemento com maior prioridade será nossa raiz(v[1]);
 * adendo:nas filas de prioridade tendemos a utilziar v[1] como nossa raiz e não v[0],]
 *justamente por isso, nós inicializamos o tamanho do nosso vetor N+1, logo:v[N+1];
*/
void PQinsert(Item v){
  pq[++N] = v;
  fixUp(N);
  }


void fixDown(int k,int N){
    while(2*k <= N){
        int j = 2*k; //filho da esquerda , da direita seria 2*k+1


        //vê qual filho é maior e se está dentro do vetor;
        if(j<N && less(pq[j],pq[j+1])) j++; 
        
        //troca o pai e o filho de lugar já que o filho é maior
        exch(pq[k],pq[j]);

        //atualiza o indice do pai para o do filhos
        //já que eles trocaram de lugar;
        k = j;

      }



  }









//função de remoção ideias de codigo e funcionamento;
/*substituir a raiz pela folha, ou seja, como é uma fila de prioridade, entede-se que o 
 * removido será o com o maior prioridade, neste caso o maior valor dentro da nossa árvore;
restauração da heap, como nós iremos remover
, nós devemos colocar nossa atual raiz como o ultimo indice do nosso vetor, 
logo o menor valor irá assumir v[1] de depois realizemos sua comparação com 
seus filhos até o maior tomar o lugar da raiz;
*/

Item PQdelmax(){
    //trocar a raiz pelo ultimo
    exch(pq[1],pq[N]);
    
    //comparação do "novo" primeiro com os filhos
    fixDown(1,N-1);

    //retornar o item removido;

    return pq[N--] //retorna o ultimo e depois decrementa o tamanho do vetor
  }





