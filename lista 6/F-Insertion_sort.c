#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;

#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) {Item t=A;A=B;B=t;}

// inserir cada elemento na posição correta em relação ant
//comparação item a item com seu ant até encontrar um menor
//cada iteração, resulta em um vetor parcialmente ordenado
//inicio até pos atual


void insertion_sort_otimizado(int v[],int l,int r){
    int elem,i,j;
    for ( i = l+1; i <= r; i++){
        elem =v[i];
        for (j= i; j > l && elem < v[j-1]; j--){
            v[j] = v[j-1];
        }
        v[j]= elem;
    }
    
}



int main(){
    int v[50000];
    int aux = 0;
    for(;scanf("%d", &v[aux]) != EOF;aux++);

    insertion_sort_otimizado(v,0,aux-1);

    for (int i = 0; i < aux; i++)
    {
        printf("%d",v[i]);
    }
    printf("\n");
    return 0;
    

}