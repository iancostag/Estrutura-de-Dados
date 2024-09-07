#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;
#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) { Item t=A; A=B;B=t;}
#define compexch(A,B) if (less(B,A)) exch(A,B)

void bubble(int v[], int l, int r){
    int swap =1;
    for ( ; l < r && swap; r--){
        swap = 0;
        for (int j=l; j < r; j++){
            if (v[j] > v[j+1]){
                exch(v[j],v[j+1]); 
                swap = 1;
            }
        }       
    }
}

int busca_binaria(int vetor1[],int l ,int r,int x){
    int m = (l+r) /2;
    if (l >r ) return -1;
    if(vetor1[m] == x){
        return m;
    } else if(vetor1[m] < x){
        return busca_binaria(vetor1,m+1,r,x);
    } else
        return busca_binaria(vetor1,l,m-1,x);
}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int v[1000],v2[1000];


    for (int i =0; i < n; i++){
        scanf("%d",&v[i]);
    }
    for (int j = 0; j < m; j++){
        scanf("%d", &v2[j]);
    }

    bubble(v,0,n-1);

    for (int k = 0; k < m; k++){
        int pos = busca_binaria(v,0,n-1,v2[k]);
        printf("%d\n",pos);
    }
    
   return 0;
}