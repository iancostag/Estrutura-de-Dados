#include <stdio.h>

void reguaInglesa(int n) {
    if (n == 0) return;
    reguaInglesa(n - 1);
    printf(".");
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");

    reguaInglesa(n - 1);
}
int main(){
    int n;
    scanf("%d", &n);
    reguaInglesa(n);
    return 0;
}