#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;
#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) { Item t=A; A=B;B=t;}
#define compexch(A,B) if (less(B,A)) exch(A,B)



void bubble_sort(int v[], int l, int r){
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
