#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;

#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) {Item t=A;A=B;B=t;}
#define compexch (A, B ) if( less (B , A ) ) exch (A , B )


int partition(int *v,int l,int r){
    //pivô
    int pivo = v[r];
    int i = l-1, j =r;
    while(i<j){
        while(v[++i] < pivo);
        while(v[--j] > pivo && j>l);
        if (i<j)
            exch(v[i],v[j]);
    }
    exch(v[i],v[r]);
    return i;
}

void quick_sort(int *v, int l, int r){
    if(r<=l) return;
    int meio = (l+r)/2;
    if(v[meio] < v[l]) exch(v[meio],v[l]);
    if(v[r] < v[l]) exch(v[l],v[r]);
    if (v[meio] < v[r]) exch(v[r],v[meio]);  
    
    
    int p = partition(v,l,r);

    quick_sort(v,l,p-1);
    quick_sort(v,p+1,r);
}
int main(){
    int n;
    scanf("%d",&n);
    int *v = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }
    quick_sort(v,0,n-1);
    
    for (int i = 0; i < n; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}