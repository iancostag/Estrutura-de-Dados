#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;
#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) {Item t=A;A=B;B=t;}

static Item *pq;
static int N;


void PQinit(int maxN){
    pq = malloc(sizeof(Item) * (maxN+1));
    N = 0;
}
int PQempty () {
 return N ==0;
}
void fixUp(int k){
    while (k>1 && less(pq[k],pq[k/2])) // se n for a raiz e o filho for menor que o pai, árvore maior prioridade é o menor
    {
        exch(pq[k],pq[k/2]);
        k = k/2;
    }
}
void PQinsert(Item v){
    pq[++N] = v;

    fixUp(N);

}
void fixDown(int k,int N){
    while (2*k<= N)
    {
        int j = 2*k;
        if (j<N && less(pq[j+1],pq[j]))
            j++;
        if (less(pq[k],pq[j]))
            break;
        exch(pq[k],pq[j]);
        k=j;
        
    }
}
void PQchange(int k,int valor){
    
    if(pq[k] < valor){
        pq[k] = valor;
        fixDown(k,N);
    }else {
        pq[k]=valor;
        fixUp(k);
    }


}
Item PQdelmin(){
    exch(pq[1],pq[N]);
    fixDown(1,N-1);
    return pq[N--];
}
int main(){
    int O,P;
    PQinit(100);
    while (scanf("%d %d", &O, &P) == 2){
        if (O == 1){
            if (N ==100){
                int maior = N;
                for (int i = N/2; i < N; i++){
                    if (pq[i] > pq[maior]){
                       maior = i;
                    }
                }
                if (pq[maior] > P)
                        PQchange(maior,P);
                    
            }else
                PQinsert(P);
            
            
        }else{
            int v[100];
            for (int i = 0; i < P; i++){
                v[i] = PQdelmin();
                printf("%d ", v[i]);
            } 
            for (int i = 0; i < P; i++)
            {
                PQinsert(v[i]);
            }
            printf("\n");
        }
        
    }
}