#ifndef _ORDENACAO_H_
#define _ORDENACAO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t=A; A=B; B=t; }
#define compexch(A, B) if(less(B, A)) exch(A, B)

void show(int [], int, int);
int is_sorted(int [], int, int );

#endif
