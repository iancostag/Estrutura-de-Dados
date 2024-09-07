#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;
#define key(A) (A)
#define less(A,B) (key(A) <key(B))
#define exch(A,B) { Item t=A;A=B;B=t;}

void bubble(int v[],int l,int r){
    int swap =1;
    for (;l < r && swap; r--){
        for (int j = l; l < r; j++)
        {
            swap = 0;
            if (less(v[j],v[j+1])){
                exch(v[j],v[j+1])
                swap = 1;
            }
        }
    }
}

int busca (int v[], int x, int N) {
  int i = 0;
  while (i < N) { // Primeira comparacao: ainda existem elementos em "v"
    if (x == v[i]) // elemento encontrado devolve sua posicao (indice)
      return i;
    i++; // tenta com o proximo
    }
  return -1; // elemento NAO existe em "v"!
  } // int busca(.)



int main(){
    int N,M,v[10000],x;
    scanf("%d %d", &N, &M);
    for (int i = 0;i < N; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int j = 0; j < M; j++)
    {
        scanf("%d",&x);
        int resultado = busca(v,x,N);
        printf("%d\n", resultado);
    }
}