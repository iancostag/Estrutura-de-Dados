#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Item;
#define key(A) (A)
#define less(A,B) (key(A) < key(B))
#define exch(A,B) { Item t=A; A=B;B=t;}
#define compexch(A,B) if (less(B,A)) exch(A,B)



void bubbleSort(int vetor[], int l, int r){

    for (; l < r; r--){
        for (int j = l; l < r; j++){
            if (vetor[j] > vetor[j+1]){
                exch(vetor[j],vetor[j+1])
            }
        }
    }
}