#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;

#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) {Item t=A;A=B;B=t;}

void merge(int *v,int l, int m,int r){
    int tam = r+1-l;
    int *aux= malloc(sizeof(int)*tam);

    int i=l;
    int j = m+1;
    int k = 0;

    while(i<=m && j<=r){
        if (v[i] <= v[j]){
           aux[k++] = v[i++]; 
        }else
            aux[k++] = v[j++];
    }

    while(i<=m) aux[k++] = v[i++];
    while(j<=r) aux[k++] = v[j++];

    for (k =0 , i= l; i <= r; i ++ , k ++)  
        v[i] = aux[k];

    free(aux);

}

void merge_sort(int *v,int l, int r){
    if(l >= r) return;
    int m = (r+l)/2;

    merge_sort(v,l,m);
    merge_sort(v,m+1,r);
    merge(v,l,m,r);

}

int main(){
    int n;
    scanf("%d", &n);
    int *v = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    merge_sort(v,0,n-1);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d", v[i]);
    }
    printf("\n");

    return 0;
}