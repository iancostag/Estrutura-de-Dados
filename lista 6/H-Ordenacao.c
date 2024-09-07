#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;

#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) { Item t=A;A=B;B=t;}


void ordena(int *v, int n){
    int menor;
    for (int i = n-n; i <= n-1; i++){
        menor = i;
        for (int j = i+1; j <= n-1; j++){
            if (v[j]<v[menor])
                menor = j;
        }
        if(i != menor)
            exch(v[i],v[menor]);
    }
}
