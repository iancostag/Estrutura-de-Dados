#include<stdio.h>
#include<stdlib.h>

int busca_binaria(int *v,int e, int d, int x){
    int m = (e+d)/2;

    if(e==d) return m;
    if(v[m] == x) return m;

    if(v[m] < x){
         return busca_binaria(v,m+1, d,x);
        
    }else return busca_binaria(v,e,m,x);
}

int main(){
    int m,n;
    scanf("%d %d", &n, &m);
    int *v = malloc(n * sizeof(int));
    int *v2 = malloc(m * sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    for(int i = 0;i < m;i++){
        scanf("%d", &v2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\n",busca_binaria(v,0,n,v2[i]));
    }
    

}