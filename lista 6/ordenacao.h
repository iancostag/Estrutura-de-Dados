#ifndef _ORDENACAO_H_
#define _ORDENACAO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t=A; A=B; B=t; }
#define compexch(A, B) if(less(B, A)) exch(A, B)

void show(int [], int, int);
int is_sorted(int [], int, int );


//elementares
void selection(int v[], int l, int r);
void selection_r(int v[], int l, int r);
void bubble(int v[], int l, int r);
void shaker(int v[], int l, int r);
void insertion_simples(int v[], int l, int r);
void insertion_otimizado(int v[], int l, int r);
void insertion_otimizado_pre(int v[], int l, int r);
void shell(int v[], int l, int r);

//eficientes



#endif
