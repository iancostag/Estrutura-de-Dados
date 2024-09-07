#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;

#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) {Item t=A;A=B;B=t;}

void selection_sort(int v[],int l, int r){
    int menor;
    for ( int i = l; i < r; i++){
        menor = i;
        for (int j =i+1; j <= r; j++){
            if(v[j]<v[menor])
                menor = j;
        }
        if (i != menor)
            exch(v[i], v[menor]);   
    }
    

}
int main(){
    int v[1001];
    int aux = 0;
    for (;scanf("%d", &v[aux]) != EOF; aux++);

    selection_sort(v,0,aux-1);

    for (int i = 0; i < aux; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");

    return 0;
}