#include <stdio.h>

long int somaDigito(long int n){
    if (n == 0)
        return 0;
    else
        return n%10 + somaDigito(n/10);
}

int main(){
    long int n;
    scanf("%ld",&n);
    printf("%ld\n",somaDigito(n));
    return 0;
}